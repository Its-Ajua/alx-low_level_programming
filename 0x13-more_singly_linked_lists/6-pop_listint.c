#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * of a listint_t linked list
 * @head: pointer to the first node in the list
 *
 * Return: the head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int x;

	if (!head || !*head)
		return (0);

	x = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (x);
}
