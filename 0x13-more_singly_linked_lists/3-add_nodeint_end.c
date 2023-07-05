#include "lists.h"
/**
 * *add_nodeint_end - entry point to adds a node at the beginning
 * @head: head
 * @n: value
 * Return: new nodes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tmp = *head;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
	{
		return (NULL);
	} /* end if */
	new_node->n = n;

	if (tmp == NULL)
	{
		*head = new_node;
	} /* end if */
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		} /* end while */
		tmp->next = new_node;
	} /* end else */
	return (new_node);
} /* end if */
