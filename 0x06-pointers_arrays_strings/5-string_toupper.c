#include "main.h"

/**
 * string_toupper - function that changes all lowercase
 * letters of a string to uppercase
 * @str: strings to be changed to uppercase
 *
 * Return: str
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
	}
	return (str);
}
