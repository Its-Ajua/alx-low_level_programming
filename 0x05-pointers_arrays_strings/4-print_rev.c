#include "main.h"

/**
 * print_rev - Function that prints a string in reverse
 * @s: the string to be reversed
 *
 */

void print_rev(char *s)
{
	int rev;

	for (rev = 0; s[rev] != '\0'; rev++)
		;
	for (rev = rev - 1; s[rev] != '\0'; rev--)
	{
		_putchar(s[rev]);
	}
	_putchar('\n');
}
