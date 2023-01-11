#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - length of the string
 * @s: input
 *
 * Return: length of the string
 */

int _strlen (char *s)
{
	int i = 0;
	if (s[i] == '\0')
		return (1);
	i++;
	return (_strlen(s + 1));
}

/**
 * word_count - counting the words
 * @s: input
 *
 * Return: counted words
 */

int word_count(char *s)
{
	int i = 0;
	int count = 0;

	while (i <= _strlen(s))
	{
		if ((s[i] != ' ') || (s[i] != '\0'))
			i++;
		else if (((s[i] == ' ') || (s[i] == '\0')) && ((i && (s[i - 1] != ' '))))
		{
			count += 1;
			i++;
		}
		else
			i++;
	}
	return (count);
}
