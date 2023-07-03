#include <stdlib.h>
#include "lists.h"
/**
 *  free_list - to free a linked list
 *  @head: the list to be freed
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);

		head = temp;
	} /* end while */
} /* end function */
