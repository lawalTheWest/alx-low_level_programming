#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Entry point
 * @b: 'received size of data type'
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	/* initialization */
	ptr = malloc(b);
	/* validating parameters */
	if (ptr == NULL)
	{
		exit(98);
	} /* end if */
	else
	{
		return (ptr);
	} /* End else */
} /* End function */
