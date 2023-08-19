#include "lists.h"
/**
 * print_dlistint - Entry point
 * Description: 'To print all the elements of a dlistint_t list.'
 * @h: ' "*h" pointer to the head node'
 *
 * Return: number of nodes in list
 */


size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes_count = 0; /* the nodes count */
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes_count += 1;
	} /* end while */

	return (nodes_count); /* to return number of nodes */
} /* End Function */
