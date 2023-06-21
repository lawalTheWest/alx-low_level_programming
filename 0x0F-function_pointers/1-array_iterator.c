/* custom header file */
#include "function_pointers.h"
/* other header file */
#include <stdlib.h>
/**
 * array_iterator - Entry point with a void return type
 * @array: the array of integers
 * @size: the size of array
 * @action: the function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	/* declaring variables */
	unsigned int n = 0; /* counter */

	/*
	 * validating array
	 * if array and action are false or (NULL)
	 */
	if (!array || !action)
	{
		return;
	} /* End if */
	/* initializing the array of pointers */
	for (n = 0; n < size; n++)
	{
		action(array[n]);
	} /* End for */
} /* End function */
