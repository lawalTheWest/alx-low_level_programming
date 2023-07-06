#include "lists.h"

/**
 * get_nodeint_at_index - Entry point
 * Description: function to return list.
 * @head: list head
 * @index: node index to return
 * Return: current node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node;

	if (head == NULL)
	{
		return (0);
	} /* end if */

	current_node = head;

	while (index != 0)
	{
		current_node = current_node->next;
		index--;
		if (current_node == NULL)
		{
			return (0); /*Out of range*/
		} /* end if */
	} /* End while */

	return (current_node);
} /* End function */
