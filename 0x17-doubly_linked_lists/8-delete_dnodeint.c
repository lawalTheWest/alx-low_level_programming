#include "lists.h"
/**
 * delete_dnodeint_at_index - Entry point
 * Description: 'Deletes a node from a list
 * @head: A pointer to the first node
 * @index: The index of the node to be deleted
 * Return: on success - return 1 else returns -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;

	/* Validate parameters */
	if (*head == NULL)
	{
		return (-1);
	} /* End if */

	for (; index != 0; index--)
	{
		/* validate list */
		if (tmp == NULL)
		{
			return (-1);
		} /* End if */
		tmp = tmp->next;
	} /* End for */

	if (tmp == *head)
	{
		*head = tmp->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		} /* End if */
	} /* End if */

	else
	{
		tmp->prev->next = tmp->next;
		if (tmp->next != NULL)
		{
			tmp->next->prev = tmp->prev;
		} /* End if */
	} /* End else */

	free(tmp);

	return (1);
} /* END FUNCTION */
