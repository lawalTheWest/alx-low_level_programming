#include "function_pointers.h"
/**
 * int_index - Entry point
 * @array: the search array
 * @size: srray size
 * @cmp: function pointer to compare
 * Return: 0 on success or -1 on otherwize
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0; /* counter */

	/* validating arguments */
	if (array && cmp)
	{
		/* Iterating through to search */
		for (; index < size; index++)
		{
			if (cmp(array[index]) != 0)
			{
				return (index);
			} /* end if */
		} /* end for */
	} /* End if */
	return (-1);
} /* End function */
