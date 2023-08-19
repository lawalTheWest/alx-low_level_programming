#include "lists.h"
/**
 * free_dlistint - Entry point
 * @head: a pointer to the first node
 * Description: 'this function frees all dlistint_t list'
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *hold_me;

	while (head)
	{
		/* hold the contents of the next node */
		hold_me = head->next;
		/* Free the contents of the original node */
		free(head);
		/*
		 * assign the contents of the next node
		 * as the head mode and
		 * repeat the process
		 */
		head = hold_me;
	} /* end while */
} /* END FUNCTION */
