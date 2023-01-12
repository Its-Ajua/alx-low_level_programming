#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i, j, size;
	int *str;

	if (min > max)
		return (NULL);
	size = max - min;
	str = malloc((sizeof(int)) * (size + 1));
	if (str == NULL)
		return (NULL);
	j = min;
	i = 0;
	for (j = min; j <= max; j++)
	{
		str[i] = j;
		i++;
	}
	return (str);
}
