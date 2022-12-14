#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)

{
	int i;

	long int x = 0;
	long int y = 1;
	long int sum;

	for (i = 0; i < 50; i++)

	{
		sum = x + y;
		x = y;
		y = sum;
		printf("%ld", sum);

		if (i < 49)
		{
			printf(", ");

		}
	}
	printf("\n");
	return (0);
}
