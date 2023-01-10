#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.]
 * @size: size of array
 * @c: character to assign
 *
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *spc;

	if (size == 0)
		return (NULL);
	spc = malloc(sizeof(char) * size);

	if (spc == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		spc[i] = c;
	}
	return (spc);
}
