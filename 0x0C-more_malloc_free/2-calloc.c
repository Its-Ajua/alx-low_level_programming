#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: amount in bytes of elements
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, cal_size;
	char *str;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	cal_size = nmemb * size;
	str = malloc(cal_size);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < cal_size)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
