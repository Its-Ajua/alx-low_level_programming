#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: pointer to the first node
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *temp = NULL;

	while (*head)
	{
		temp = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = temp;
	}

	*head = previous;

	return (*head);
}
