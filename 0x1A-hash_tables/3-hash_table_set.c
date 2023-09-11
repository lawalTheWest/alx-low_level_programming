#include "hash_tables.h"
/**
 * create_node - creates a new hash node
 * @key: key
 * @value: value for the node
 *
 * Return: returns the new node, or NULL on failure
 */


hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	/* Validate the allocaion */
	if (node == NULL)
		return (NULL);
	/* Duplicate the key string */
	node->key = strdup(key);
	/* validate duplication and return null if failled */
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	} /* End if */
	/* Duplicate value string */
	node->value = strdup(value);
	/* Validate duplication and return null if failled */
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	} /* End if */

	/* Initialize the next pointer to null */
	node->next = NULL;

	return (node);
} /* End function */


/**
 * hash_table_set - Entry point
 * Description: (sets a key to value in hash table)
 * @ht: hash table to add elements to
 * @key: key
 * @value: data value
 *
 * Return: 1 if successful, 0 otherwise
 */


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *hash_node, *tmp;
	char *new_value;

	/* Validate parameters ht, key && value */
	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0 ||
		value == NULL)
		return (0);
	/* End if */
	/* Getting the index where the key-value pair should be stored */
	index = key_index((const unsigned char *)key, ht->size);
	/* traverse the linked list at the gotten index */
	tmp = ht->array[index];
	while (tmp != NULL)
	{	/* Compare to find matching keys and update the value if found */
		if (strcmp(tmp->key, key) == 0)
		{	/* Duplicate the new value */
			new_value = strdup(value);
			/* Validate duplication and return 0 if failled */
			if (new_value == NULL)
				return (0);
			/* End if */
			/* free the old value */
			free(tmp->value);
			tmp->value = new_value;
			return (1);
		} /* End if */
		tmp = tmp->next;
	} /* End while */
	/* if matching key is not found create a new one */
	hash_node = create_node(key, value);
	/* Validate the node creation */
	if (hash_node == NULL)
		return (0);
	/* End if */
	/* add the new node to the beginning of the linked list */
	hash_node->next = ht->array[index];
	ht->array[index] = hash_node;
	return (1);
} /* End function */
