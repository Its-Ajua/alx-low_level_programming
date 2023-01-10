#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - length of string
 * @s: string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	if (i == '\0')
		return (0);
	i++;
	return (i + (_strlen(s + 1)));
}
/**
 * str_concat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer should point to a newly allocated
 * space in memory which contains the contents of s1,
 * followed by the contents of s2
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i;
	int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	str = malloc(sizeof(char) * _strlen(s1) + _strlen(s2 + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		str[i] = s2[j];
		i++;
	}
	return (str);
}
