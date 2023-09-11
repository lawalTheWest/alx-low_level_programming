#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: table to retrieve value from
 * @key: key to find value
 *
 * Return: value associated with key, or NULL if key cannot be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index_counter;
	hash_node_t *tmp;

	/* Validate the parameters */
	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0)
		return (NULL);
	/* end if */

	/*
	 * Using the key_index function created in task #2
	 * o store the key-value index
	 */
	index_counter = key_index((const unsigned char *)key, ht->size);
	/* initialize the temporary pointer to the linked list @ index */
	tmp = ht->array[index_counter];
	/* Traversing the list to find key */
	while (tmp != NULL)
	{
		/* if found, return the value */
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		/* node_index += 1 */
		tmp = tmp->next;
	} /* end while */

	/* return null if not found */
	return (NULL);
} /* end function */
