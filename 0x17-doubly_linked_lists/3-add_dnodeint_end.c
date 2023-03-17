#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node
 * at the end of a dlistint_t list.
 * @head: head of the list
 * @n: value of element
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
{
	dlistint_t *newNode;
	dlistint_t *val;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	val = *head;

	if (val != NULL)
	{
		while (val->next != NULL)
			val = val->next;
		val->next = newNode;
	}
	else
	{
		*head = newNode;
	}
	newNode->prev = val;

	return (newNode);
}
