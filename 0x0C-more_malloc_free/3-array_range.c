#include "main.h"
#include <stdlib.h>
/**
 * array_range - Entry point
 * Dscription: function that creates an array of integers.
 * @min: minimum value
 * @max: maximum value
 * Return: ptr
 */
int *array_range(int min, int max)
{
	int *ptr;
	int x = 0;
	int y = (max - min) + 1;

	/* Validate parameters */
	if (min > max)
	{
		return (NULL);
	} /* end if */

	ptr = malloc(((max - min) + 1) * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	} /* end if */

	for (x = 0; x < y; x++)
	{
		ptr[x] = min;
		min++;
	} /* end for */
	return (ptr);
} /* end if */
