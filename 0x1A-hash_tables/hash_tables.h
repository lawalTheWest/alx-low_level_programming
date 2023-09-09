#ifndef HEADER_H
#define HEADER_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - struct (for Hash table data)
 * @size: the array size
 * @array: An array
 * Each cell of this array is
 * a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision
 * handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t; /* End structure type */

/* Task 0 */
hash_table_t *hash_table_create(unsigned long int size);


#endif
