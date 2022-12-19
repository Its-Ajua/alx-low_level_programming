#include "main.h"

/**
 * puts_half - function that prints half of a string,
 * followed by a new line
 * @str: the string to be printed
 *
 * Return: void
 */

void puts_half(char *str)
{
	int half;

	for (half = 0; str[half] != '\0'; half++)
		;
	for (half = half / 2; str[half] != '\0'; half++)
	{
		_putchar(str[half]);
	}
	_putchar('\n');
}
