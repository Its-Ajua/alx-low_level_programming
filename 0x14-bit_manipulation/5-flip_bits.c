#include "main.h"

/**
 * flip_bits - function that returns the number of bits you
 * would need to flip to get from one number to another
 * @n: input value
 * @m: input value
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int val;
	unsigned long int x = n ^ m;
	int i, count = 0;

	for (i = 63; i >= 0; i--)
	{
		val = x >> i;
		if (val & 1)
		count++;
	}
	return (count);
}
