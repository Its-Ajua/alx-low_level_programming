#include "main.h"
#include <string.h>

/**
 * puts_half - function that prints half of a string,
 * followed by a new line
 * @str: the string to be printed
 *
 * Return: void
 */

void puts_half(char *str)
{
int i, len, n;
len = strlen(str);
n = (len - 1) / 2;
for (i = n + 1; i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
