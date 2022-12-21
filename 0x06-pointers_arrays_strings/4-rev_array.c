#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array of integers
 * @n: number of integers
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int s;
	int z;

	for (s = 0; s < n / 2; s++)
	{
		z = a[s];
		a[s] = a[n - 1 - s];
		a[n - 1 - s] = z;
	}
}
