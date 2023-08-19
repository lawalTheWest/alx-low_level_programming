#include "lists.h"
/**
 * get_dnodeint_at_index - Entry point
 * @index: node index - counter to align with the index value (integer)
 * @head: a pointer to the first node
 * Return: the nth node of the list | Null if does not exist.
 */


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
		{
			return (NULL);
		} /* End if */

		head = head->next;
	} /* end if */

	return (head);

} /* END FUNCTION */
