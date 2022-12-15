#include "main.h"

/**
 * print_line - draws a straight line
 * @n: number of times the character _ should be printed
 *
 * Return: Always 0.
 */

void print_line(int n)
{

	if (n <= 0)
		_putchar('\n');

	else
	{
		int line;

		{
			for (line = 0; line <= n; line++)
			{
				_putchar('_');
			}
			_putchar('\n');
		}
	}
}
