#include "lists.h"
#include <stdlib.h>
/**
 * *add_nodeint - to add a new node at the beginning
 * @head: head
 * @n: value (const int)
 * Return: new elements if failed return null.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	} /* end if */
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
} /* End function */
