#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Entry point
 * @nmemb: value
 * @size: value
 * Return: ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *ptr;

	/* Validating parameters */
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	} /* end if */

	/* memory allocation */
	ptr = malloc(nmemb * size);

	/*  validation */
	if (ptr == NULL)
	{
		return (NULL);
	} /* End if */
	while (i < (nmemb * size))
	{
		ptr[i] = 0;
		i++;
	} /* End while */

	return (ptr);
} /* End function */
