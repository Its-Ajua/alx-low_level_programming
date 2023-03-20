#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: destination of copied memory
 * @src: source of memory
 * @n: number of bytes
 * Return: copied source to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
