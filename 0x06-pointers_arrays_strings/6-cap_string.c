#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @cap: strings to be capitalized
 *
 * Return: void
 */

char *cap_string(char *cap)
{
	int i = 0;

	while (cap[i] != '\0')
	{
		while (!(cap[i] >= 97 && cap[i] <= 122))
			i++;
		if (cap[i - 1] == ' ' ||
				cap[i - 1] == '\t' ||
				cap[i - 1] == '\n' ||
				cap[i - 1] == ',' ||
				cap[i - 1] == ';' ||
				cap[i - 1] == '.' ||
				cap[i - 1] == '!' ||
				cap[i - 1] == '?' ||
				cap[i - 1] == '"' ||
				cap[i - 1] == '(' ||
				cap[i - 1] == ')' ||
				cap[i - 1] == '{' ||
				cap[i - 1] == '}' ||
				i == 0)
			cap[i] -= 32;
		i++;
	}
	return (cap);
}
