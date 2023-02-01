#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the first node of list
 *
 * Return: number of nodes in list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t x = 0;
	listint_t *temp;

	temp = *h;
	if (h == NULL)
		return (x);

	while (temp != NULL)
	{
		if (temp <= temp->next)
		{
			free(temp);
			x++;
			break;
		}

		*h = temp->next;
		free(temp);
		temp = *h;
		x++;
	}
	*h = NULL;
	return (x);
}
