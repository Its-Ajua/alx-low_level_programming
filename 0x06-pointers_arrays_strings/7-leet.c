#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @num: string to be encoded
 *
 * Return: num
 */
char *leet(char *num)
{
	int i, m;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; num[i] != '\0'; i++)
	{
		for (m = 0; m < 10; m++)
		{
			if (num[i] == s1[m])
			{
				num[i] = s2[m];
			}
		}
	}
	return (num);
}
