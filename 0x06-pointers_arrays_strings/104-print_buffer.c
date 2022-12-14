#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer to be printed
 * @size: buffer size
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int a, c;
	a = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (a < size)
	{
		if (a % 10 == 0)
			printf("%08x: ", a);
		for (c = a; c < a + 9; c += 2)
		{
			if ((c < size) && ((c + 1) < size))
				printf("%02x%02x ", b[c], b[c + 1]);
			else
			{
				while (++c <= a + 10)
					printf(" ");
				printf(" ");
			}
		}
		for (c = a; c < a + 9 && c < size; c++)
		{
			if (b[c] >= 32 && b[c] <= 126)
				printf("%c", b[c]);
			else
				printf(".");
		}
		printf("\n");
		a += 10;
	}
}
