#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: pointer to number to be changed
 * @index: index of numbe in bit
 *
 * Return: 1 if it worked, or -1 if an error occurs
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (1 << index) | *n;
	return (1);
}
