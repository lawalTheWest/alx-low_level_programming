#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the elements of a linked list.
 * @h: the pointer to the list_t list.
 * Return: counter
 */

size_t print_list(const list_t *h)
{
	size_t s = 0; /* counter */

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		} /* End if */
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		} /* End else */
		h = h->next;
		s++;
        } /* End while */

	return (s);
} /* End function */
