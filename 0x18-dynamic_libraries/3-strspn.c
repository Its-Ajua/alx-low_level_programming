#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: input value
 * @accept: input value
 *
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int byte = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				byte++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (byte);
		}
		s++;
	}
	return (byte);
}
