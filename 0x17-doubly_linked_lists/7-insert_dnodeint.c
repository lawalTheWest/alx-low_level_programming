#include "lists.h"
/**
 * insert_dnodeint_at_index - Entry point
 * Description: 'To inserts a new node in a
 * list at a given position'
 * @h: A pointer to the head.
 * @idx: The position to insert the new node
 * @n: data (integer)
 *
 * Return: If the function fails
 * return - NULL
 * else - return the address of the new node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	/* validate parameters */
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	} /* End if */

	for (; idx != 1; idx--)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	} /* end for  */

	if (tmp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	} /* end if */

	/* validate list */
	if (new_node == NULL)
	{
		return (NULL);
	} /* end if */

	new_node->n = n;
	new_node->prev = tmp;
	new_node->next = tmp->next;
	tmp->next->prev = new_node;
	tmp->next = new_node;

	return (new_node);
} /* END FUNCTION */
