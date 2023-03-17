#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at
 * index of a dlistint_t linked list.
 * @head: head of the list
 * @index: index of the node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *val1;
	dlistint_t *val2;
	unsigned int i = 0;

	val1 = *head;

	if (val1 != NULL)
		while (val1->prev != NULL)
			val1 = val1->prev;

	while (val1 != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = val1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				val2->next = val1->next;
				if (val1->next != NULL)
					val1->next->prev = val2;
			}

			free(val1);
			return (1);
		}
		val2 = val1;
		val1 = val1->next;
		i++;
	}
	return (-1);
}
