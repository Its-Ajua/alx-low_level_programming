#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at
 * the beginning of a dlistint_t list.
 * @head: head of the list
 * @n: data of the element
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;

	if (*head != NULL)
	{
		while (*head->prev != NULL)
			*head = *head->prev;
	}

	newNode->next = *head;

	if (*head != NULL)
		*head->prev = newNode;

	*head = newNode;

	return (newNode);
}
