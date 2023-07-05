#include "lists.h"

/**
 * free_listint - The function that free a memory location
 * @head: the head of the linked list
 */
void free_listint(listint_t *head)
{
	listint_t *tPtr;

	if (head == NULL)
	{
		return;
	} /* end if */
	while (head)
	{
		tPtr = head->next;
		free(head);
		head = tPtr;
	} /* end while */
	free(head);
} /* END FUNCTION */
