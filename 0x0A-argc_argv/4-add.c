#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that adds integers
 * @argc: counts argument
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, result = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] >= '0' && *argv[i] <= '9')
			{
				result += atoi(argv[i]);
			}
			else if (*argv[i] <= '0' || *argv[i] >= '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", result);
	}
	return (0);
}
