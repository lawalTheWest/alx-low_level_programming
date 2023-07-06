#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head of linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node;

	if (head == NULL)
	{
		return;
	} /* end if */
	while (*head != NULL)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
	} /* end while */

} /* end function */
