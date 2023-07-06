#include "lists.h"

/**
 * pop_listint - the function deletes the head node of a linked list
 * @head: head of the linked list
 * Return: the head node’s data (n) and 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *current_node;
	int node_data;

	/* validating node head */
	if (head == NULL)
	{
		return (0);
	} /* end if */
	current_node = *head;

	/* validating node current node */
	if (current_node == NULL)
	{
		return (0);
	} /* end if */

	node_data = current_node->n;
	*head = current_node->next;
	free(current_node);
	return (node_data);
} /* end function */
