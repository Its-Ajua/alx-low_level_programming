#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int weight = 1, rem = 0;

	if (!b)
		return (0);

	for (int i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
	}

	while (b != 0)
	{
		rem = b % 10;
		val = val + (rem * weight);
		b = b / 10;
		weight = weight * 2;
	}

	return (val);
}
