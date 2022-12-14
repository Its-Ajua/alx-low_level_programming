#include <stdio.h>
#define LARGEST 10000000000
/**
 * main - prints the first 98 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	unsigned long int ar1 = 0;
	unsigned long int bk1 = 1;
	unsigned long int ar2 = 0;
	unsigned long int bk2 = 2;
	unsigned long int hold1, hold2, hold3;
	int count;

	printf("%lu, %lu, ", bk1, bk2);
	for (count = 2; count < 98; count++)
	{
		if (bk1 + bk2 > LARGEST || ar2 > 0 || ar1 > 0)
		{
			hold1 = (bk1 + bk2) / LARGEST;
			hold2 = (bk1 + bk2) % LARGEST;
			hold3 = ar1 + ar2 + hold1;
			ar1 = ar2, ar2 = hold3;
			bk1 = bk2, bk2 = hold2;
			printf("%lu%010lu", ar2, bk2);
		}
		else
		{
			hold2 = bk1 + bk2;
			bk1 = bk2, bk2 = hold2;
			printf("%lu", bk2);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
