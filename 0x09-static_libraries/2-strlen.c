#include "main.h"

/**
 * _strlen - Function that returns the length of a string
 * @s: string length to be returned
 *
 * Return: Length of string.
 */
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
	length++;
	s++;
}
return (length);
}
