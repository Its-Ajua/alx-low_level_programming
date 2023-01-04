#include "main.h"

/**
 * checks_sqrt - checks for squareroot of a number
 * @i: input value
 * @j: squareroot of input value
 *
 * Return: value if its squares equals the squareroot of the number
 */

int checks_sqrt(int j, int i)
{
	if ((i * i) > j)
	{
		return (-1);
	}
	if ((i * i) == j)
	{
		return (i);
	}
	return (checks_sqrt(j, (i + 1)));
}

/**
 * _sqrt_recursion - function that prints the square root of a number
 * @n: input value
 *
 * Return: the square root of a number
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < i)
	{
		return (-1);
	}
	return (checks_sqrt(n, i));
}
