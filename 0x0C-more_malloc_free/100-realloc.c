#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Entry point
 * Description: 'allocates a memory block using malloc and free.'
 * @ptr: pointer to memory allocated with malloc(old_size).
 * @old_size: size
 * @new_size: size
 * Return: NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	/* validate parameters */
	if (new_size == old_size)
	{
		return (ptr);
	} /* End if */
	/* Validate parameters */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	} /* End if */
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
		{
			return (NULL);
		} /* end if */
		return (p);
	} /* End if */
	if (new_size > old_size)
	{
		p = malloc(new_size);
		if (p == NULL)
		{
			return (NULL);
		} /* end if */
		for (i = 0; i < old_size && i < new_size; i++)
		{
			*((char *)p + i) = *((char *)ptr + i);
		} /* end for */
		free(ptr);
	} /* end if */
	return (p);
} /* End function */
