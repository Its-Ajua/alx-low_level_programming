#include "main.h"

/**
 * print_square - prints a square,
 * followed by a new line
 * @size: character that prints the size of the square
 * Return: 0
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		int i, count;

		for (count = 1; count <= size; count++)
		{
			for (i = 1; i <= size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
