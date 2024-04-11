#include "search_algos.h"


int linear_search(int *array, size_t size, int value)
{
	/* declare and initialize my containers/variables */
	int i;
	int e = (-1);
	int j = (int)size;

	/* Validate the array */
	if (!(array))
		return (-1);
	for (i = 0; i <= j; i++)
	{
		if (value == array[i])
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			printf("Found %d at index: %d\n", value, i);
			break;
		} /* end for */
		else if (i == j)
		{
			/* printf("Found %d at index: %d\n", value, e); */
			return (e);
		} /* end if */
		else
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
		} /* end else */
	} /* End for loop */
	return (-1);
} /* End linear_search function */
