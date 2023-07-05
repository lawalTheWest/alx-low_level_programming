#include "lists.h"
/**
 * listint_len - Entry point to return number of elements in a list
 * @h: head
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes_counter = 0;

	while (h)
	{
		nodes_counter++;
		h = h->next;
	} /* end while */

	return (nodes_counter);
} /* End function */
