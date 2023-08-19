#include "lists.h"
/**
 * get_dnodeint_at_index - Entry point
 * @index: node index - counter to align with the index value (integer)
 * @head: a pointer to the first node
 * Return: the nth node of the list | Null if does not exist.
 */


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node_counter = 0;
	dlistint_t *hold_me;

	hold_me = head->next;

	/* Validate parameters */
	if (head == NULL)
	{
		return (NULL);
	} /* end if */

	if (!(index == node_counter))
	{
		while (!(index == node_counter))
		{
			hold_me = head->next;
			head = hold_me;
			node_counter += 1;
		} /* end if */
		return (hold_me);
	} /* End while */
	else
	{
		return (hold_me);
	} /* End else */
} /* END FUNCTION */
