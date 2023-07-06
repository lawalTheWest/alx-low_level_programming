#include "lists.h"

/**
 * sum_listint - Entry point
 * Description: returns the sum of all the data (n) of a listint_t linked list
 * @head: head of linked list
 * Return: total sum of all list
 */
int sum_listint(listint_t *head)
{
	listint_t *current_node;
	int total_sum = 0;

	/* Validating parameters */
	if (head == NULL)
	{
		return (0);
	} /* End if */

	current_node = head;

	while (current_node != NULL)
	{
		total_sum += current_node->n;
		current_node = current_node->next;
	} /* End while */

	return (total_sum);
} /* End function */
