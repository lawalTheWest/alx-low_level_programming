#include "lists.h"
/**
 * add_dnodeint - Entry point
 * @head: a pointer to the first node
 * @n: the integer data
 * Return: New node's address
 */


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* create a new node */
	dlistint_t *new_node = (malloc(sizeof(dlistint_t)));

	/* vslidste parameters */
	if (new_node == NULL)
	{
		return (NULL);
	} /* end if */

	/* assigns a new data for the node */
	new_node->n = n;
	/* create a space to insert the new node */
	new_node->prev = NULL;
	/* point to the head no and appoints it as the next node */
	new_node->next = *head;

	/*
	 * Validate parameters
	 * by assigning the address of the head node to new node
	 */
	if (!(*head == NULL))
	{
		(*head)->prev = new_node;
	} /* end if */
	*head = new_node;
	return (new_node);
} /* END FUNCTION */
