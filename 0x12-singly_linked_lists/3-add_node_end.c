#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - function that adds a new node
 * at the end of a list_t list
 * @head: double pointer to the list_t list
 * @str: mew string added to the node
 *
 * Return: the address of the new elements
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *Node = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (Node->next)
		Node = Node->next;
	Node->next = newNode;

	return (newNode);
}
