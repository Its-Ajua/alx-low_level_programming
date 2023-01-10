#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: the width
 * @height: the height
 *
 * Return: pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int **str;
	int i;
	int j;
	int k;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	str = malloc(sizeof(int *) * height);

	if (str == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		str[i] = malloc(sizeof(int) * width);
		if (str == NULL)
		{
			for (k = 0; k < height; k++)
				free(str[k]);
			free(str);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			str[i][j] = 0;
	}
	return (str);
}
