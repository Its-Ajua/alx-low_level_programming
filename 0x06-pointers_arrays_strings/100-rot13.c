#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @numb: string to be encoded
 *
 * Return: numb
 */

char *rot13(char *numb)
{
	int i, j;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; numb[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (numb[i] == s1[j])
			{
				numb[i] = s2[j];
				break;
			}
		}
	}
	return (numb);
}
