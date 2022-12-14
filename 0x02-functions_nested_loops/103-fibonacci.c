#include <stdio.h>

/**
 * main - program that finds and prints the sum of the even-valued terms,
 * followed by a new line.
 *
 * Return: 0
 */

int main(void)

{
	long int i;
	long int x = 0;
	long int y = 1;
	long int sum = 0;

	for (i = 0; i < 4000000; i++)
	{
		i = x + y;
		x = y;
		y = i;
		if ((i % 2) == 0)
		{
			sum += i;
		}
	}
	printf("%ld\n", sum);
	return (0);
}

