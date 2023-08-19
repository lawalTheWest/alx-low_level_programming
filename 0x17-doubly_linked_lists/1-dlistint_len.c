#include "lists.h"
/**
 *
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
