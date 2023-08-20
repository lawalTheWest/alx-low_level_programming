#include "lists.h"
/**
 * sum_dlistint - Entry point
 * @head: pointer to the first node
 * Return: the sum of all data in the list.
 */


int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!(head))
	{
		return (0);
	} /* End if */
	while (head)
	{
		sum = head->n;
		head = head->next;
	} /* End for */
	return (sum);
} /* END FUNCTION */
