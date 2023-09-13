#include "hash_tables.h"

/**
 * hash_table_print - Entry point to prints a hash table
 * @ht: hash table to be printed
 */


void hash_table_print(const hash_table_t *ht)
{
	unsigned long int counter;
	hash_node_t *tmp;
	char flag = 0;

	if (ht == NULL || ht->array == NULL)
	{
		return;
	} /* End if */
	printf("{");
	for (counter = 0; counter < ht->size; counter++)
	{
		tmp = ht->array[counter];
		while (tmp != NULL)
		{
			if (flag == 1)
			{
				printf(", ");
			} /* End if */
			printf("'%s': '%s'", tmp->key, tmp->value);
			flag = 1;
			tmp = tmp->next;
		} /* end while */
	} /* end for */
	printf("}\n");
} /* EEnd function */
