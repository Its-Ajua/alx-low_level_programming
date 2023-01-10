#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - length of the string
 * @s: the string
 *
 * Return: the string length
 */
int _strlen(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return (1);
	i++;
	return (i + _strlen(s + 1));
}

/**
 * _strdup -  function that duplicates the string
 * @str: string to be duplicated
 *
 * Return: pointer to duplicated string
 */

char *_strdup(char *str)
{
	int i;
	char *sta;

	if (str == NULL)
		return (NULL);

	sta = malloc(sizeof(char) * _strlen(str));

	if (sta == NULL)
		return (NULL);
	for (i = 0; i < _strlen(str); i++)
	{
		sta[i] = str[i];
	}
	return (sta);
}
