#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: A pointer to the newly created hash table
 */


hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int i;

	/* Allocate memmory for tha hash table structure */
	hash_table = malloc(sizeof(hash_table_t));

	/* Validate if memory allocation was successful */
	if (hash_table == NULL)
	{
		return (NULL);
	} /* End if */

	hash_table->size = size;
	/* Assign a memmory for tha array of the hash nodes */
	hash_table->array = malloc(size * sizeof(hash_node_t *));
	/* Validating the array memory allocation if it's successful */
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	} /* End if */
	/* Initialize the array elements to null */
	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;
	return (hash_table);
} /* END FUNCTION */
