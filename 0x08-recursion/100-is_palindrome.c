#include "main.h"

/**
 * _strlen_recursion - to calculate the length of the string
 * @s: input
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * checks_pali - checks for palindrome
 * @s: input value
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome is present and 0 if not.
 */

int checks_pali(char *s, int i, int len)
{
if (s[i] != s[len - 1])
{
return (0);
}
if (i >= len)
{
	return (1);
}
return (checks_pali(s, i + 1, len - 1));
}

/**
 * is_palindrome - function that returns 1,
 *  if a string is a palindrome and 0 if not.
 *  @s: character to check
 *
 *  Return: 1 if palindrome and 0 if not
 */

int is_palindrome(char *s)
{
if (*s == 0)
{
return (1);
}
return (checks_pali(s, 0, _strlen_recursion(s)));
}
