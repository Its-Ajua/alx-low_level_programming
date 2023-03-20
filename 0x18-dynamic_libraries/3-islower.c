#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: is the int to be checked
 * Return: 1 if int is lowercase, 0 otherwise
 */
int _islower(int c)

{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
