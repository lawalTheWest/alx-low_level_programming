#include "lists.h"
/**
 * print_listint - Entry point
 * Description: prints all the elements of a list
 * @h: head
 * Return: length of the string
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes_counter = 0;

	const listint_t *myValue = h;

	while (myValue != NULL)
	{
		printf("%i\n", myValue->n);
		myValue = myValue->next;
		nodes_counter++;
	} /* End do while */

	return (nodes_counter);
} /* end function */
