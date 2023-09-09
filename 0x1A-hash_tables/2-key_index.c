#include "hash_tables.h"
/**
 * key_index - this gives the inex of a given key
 * @key: the key
 * @size: size of has table
 *
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}/* END FUNCTION */
