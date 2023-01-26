#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that returns the number of
 * elements in a linked list_t list.
 * @h: pointer to the linked list_t list
 *
 * Return: number of elements in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
