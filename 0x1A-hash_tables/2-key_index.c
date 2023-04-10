#include "hash_tables.h"

/**
 * key_index - function that gives the index of the key
 * @key: key of the node
 * @size: size of the array
 *
 * Return: the index at which the key should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
