#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the
 * data (n) of a listint_t linked list.
 * @head: pointer to the first node
 *
 * Return: the sum of all the data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
