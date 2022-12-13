#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer.
 *
 * Return: 0
 */

void jack_bauer(void)
{
	int i, x;

	for (i = 0; i <= 23; i++)
	{
		for (x = 0; x <= 59; x++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar('\n');
		}
	}
}
