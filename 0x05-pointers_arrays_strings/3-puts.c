#include "main.h"

/**
 * _puts - Function that prints a string
 * @str: string to be printed
 *
 * Return: 0.
 */
void _puts(char *str)
{
	int string;

	for (string = 0; str[string] != '\0'; string++)
	{
		_putchar(str[string]);
	}
	_putchar('\n');
}
