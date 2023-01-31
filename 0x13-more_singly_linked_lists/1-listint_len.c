#include "lists.h"

/**
 * listint_len - the number of elements in a linked list_t list
 * @h: list to check from
 *
 * Return: size of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
