#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - function that prints a struct dog
 * @d: type to be printed
 *
 */

void print_dog(struct dog *d)
{
	if (d->owner == NULL)
		d->owner = "(nil)";

	if (d->name == NULL)
		d->name = "(nil)";

	if (d == NULL)
		return;

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
