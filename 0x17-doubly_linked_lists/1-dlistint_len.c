#include "lists.h"
/**
 * dlistint_len - Entry point
 * @h: pointer to the first node (head)
 *
 * Return: number of elements in the dlistint_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elements_count = 0;

	while (h)
	{
		h = h->next;
		elements_count += 1;
	} /* end while */
	return (elements_count);
} /* END FUNCTION */
