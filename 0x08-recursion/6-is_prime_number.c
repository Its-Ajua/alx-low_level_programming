#include "main.h"

int check_prime(int n, int j);

/**
 * check_prime - calculate if the number is prime
 * @n: number to check
 * @j: iterator
 *
 * Return: 1 if n is an integer and 0 if not.
 */

int check_prime(int n, int j)
{
	if (j == 1)
	{
		return (1);
	}
	if (n % j == 0 && j > 0)
	{
		return (0);
	}
	return (check_prime(n, j - 1));
}

/**
 * is_prime_number - checks if the input integer is a prime number or not
 * @n: integer to be checked
 *
 * Return: 1 if n is a prime number, 0 if not.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (check_prime(n, n - 1));
}
