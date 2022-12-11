#include <stdio.h>
/**
 * main - Printing all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;

	for (c = 0; c <= 9; c++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (a = 0; a <= 9; a++)
			{
				if (c < b && b < a && c != b && b != a)
				{
					putchar(c + '0');
					putchar(b + '0');
					putchar(a + '0');

					if (c + b + a != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
