#include <stdio.h>

/**
 * main - program that finds and prints the largest
 * prime factor of the number 612852475143
 *
 * Return: 0
 */

int main(void)
{
	long int n, k;

	n = 612852475143;
	for (k = 2; k <= n; k++)
	{
		if (n % k == 0)
		{
			n /= k;
			k--;
		}
	}
	printf("%ld\n", k);
	return (0);
}
