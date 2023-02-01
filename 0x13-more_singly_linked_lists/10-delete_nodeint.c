#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the
 * node at index index of a listint_t linked list.
 * @head: pointer to the first node
 * @index: index of node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	else if (index == 0)
	{
		*head = previous->next;
		free(previous);
		return (1);
	}
	else
	{
		for (i = 0; i < (index - 1); i++)
		{
			if (!previous || !(previous->next))
				return (-1);
			previous = previous->next;
		}
	}
	current = previous->next;
	previous->next = current->next;
	free(current);

	return (1);
}

