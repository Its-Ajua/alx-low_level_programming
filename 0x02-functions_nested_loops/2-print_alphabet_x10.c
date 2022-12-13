#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet,
 * in lowercase,
 * followed by a new line.
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char letter;
	{
		for (i = 0; i <= 9; i++)
		{
			for (letter = 'a'; letter <= 'z'; letter++)
			{
				_putchar(letter);
			}
			_putchar('\n');
		}
	}
}
