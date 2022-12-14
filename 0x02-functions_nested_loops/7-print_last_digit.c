#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: integer to be get the last digit from
 * Return: the value of the last integer
 */

int print_last_digit(int n)
{
	int x;

	x = n % 10;

	{
		if (x < 0)
		{
			_putchar(-x + '0');
			return (-x);
		}
		else
		{
			_putchar(x + '0');
			return (x);
		}
	}
}
