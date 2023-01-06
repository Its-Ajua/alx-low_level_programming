#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 * @argc: counts arguments
 * @argv: array of arguments
 *
 * Return: 0 or 1 if error.
 */

int main(int argc, char *argv[])
{
int i, result = 1;
if (argc < 3)
{
printf("Error\n");
}
else
{
for (i = 1; i < argc; i++)
{
result *= atoi(argv[i]);
}
printf("%d\n", result);
}
return (0);
}
