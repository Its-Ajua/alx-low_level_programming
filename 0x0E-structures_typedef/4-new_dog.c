#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * _strlen - calculate the length of the string
 * @s: input value
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return (0);

	i++;
	return (i + _strlen(s + 1));
}

/**
 * _strcpy - copy string from source to destination
 * @dest: destination of string
 * @src: source of string
 *
 * Return: copied string
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}

/**
 * new_dog - function that creates a new dog
 * @name: name of the struct dog
 * @age: age of the struct dog
 * @owner: owner of the struct dog
 *
 * Return: pointer to the dog_t struct type
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	char *name_copied, *owner_copied;

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
	{
		free(doggy);
		return (NULL);
	}
	doggy->age = age;

	if (name != NULL)
	{
		name_copied = malloc(sizeof(char) * (_strlen(name) + 1));
		if (name_copied == NULL)
		{
			free(doggy);
			return (NULL);
		}
		doggy->name = _strcpy(name_copied, name);
	}
	else
		doggy->name = NULL;

	if (owner != NULL)
	{
		owner_copied = malloc(sizeof(char) * (_strlen(owner) + 1));
		if (owner_copied == NULL)
		{
			free(name_copied);
			free(doggy);
			return (NULL);
		}
		doggy->owner = _strcpy(owner_copied, owner);
	}
	else
		doggy->owner = NULL;
	return (doggy);
}
