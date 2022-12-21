#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: destination of concatenated string
 * @src: string to be concatenated
 * @n: array of strings
 *
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
