#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr -  concatenates all the arguments of your program
 * @ac: input value
 * @av: double pointer
 * Return: pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k = 0, l = 0;

	if (ac == 0)
		return (NULL);
	if (av == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		if (str[k] == '\0')
		{
			str[k++] = '\n';
		}
	}
	return (str);
}
