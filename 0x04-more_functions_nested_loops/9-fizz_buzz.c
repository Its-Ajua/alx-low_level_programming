#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the numbers from 1 to 100 followed by a new line,
 * But for multiples of three print Fizz instead of the number
 * and for the multiples of five print Buzz,
 * For numbers which are multiples of both three and five print FizzBuzz.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) != 0)
		{
			printf("%s", f);
		}
		else if ((i % 3) != 0 && (i % 5) == 0)
		{
			printf("%s", b);
		}
		else if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("%s", fb);
		}
		else
		{
			printf("%d", i);
		}
		putchar(' ');
	}
	return (0);
}
