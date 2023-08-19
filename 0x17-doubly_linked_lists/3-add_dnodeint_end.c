#include "lists.h"
/**
 * add_dnodeint_end - Entry point
 * @head: a poinyter to the first node in list
 * @n: the data (integer)
 * Return: address of new node | null if failled
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	/* create a new node to add to the list */
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *last_node = *head;

	new_node->n = n; /* the data == n */
	new_node->next = NULL;

	/* Validate parameters */
	if (new_node == NULL)
	{
		return (NULL);
	} /* end if */

	/* validate parameters */
	if (!(*head == NULL)) /* append the new node */
	{
		while (!(last_node->next == NULL))
		{
			last_node = last_node->next;
		} /* end while */
		last_node->next = new_node;

		/* append the new node as yhe last node */
		new_node->prev = last_node;

		return (new_node);
	} /* end if */
	else /* Make the new node the head node */
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	} /* end else */
} /* END FUNCTION */
