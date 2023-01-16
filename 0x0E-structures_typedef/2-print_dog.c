#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d: struct dog to be printed
 *
 */

void print_dog(struct dog *d)
{
	if (d->owner == NULL)
		d->owner = "(nil)";

	if (d->name == NULL)
		d->name = "(nil)";

	if (d->age < 0)
		printf("Age: (nil)\n");

	if (d == NULL)
		return;

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}