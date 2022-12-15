#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal
 * @n: character to draw diagonal
 *
 * Return: 0.
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');

	else
	{
		int diagonal, gap;
		{
			for (diagonal = 1; diagonal <= n; diagonal++)
			{
				for (gap = 1; gap <= n; gap++)
				{
					if (gap < diagonal)
						_putchar(' ');
					else if (diagonal == gap)
						_putchar('\\');
				}
				_putchar('\n');
			}
		}
	}
}

