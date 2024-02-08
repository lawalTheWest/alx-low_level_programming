#include "search_algos.h"

/**
  * binary_search - Searches for a value in a sorted array
  * @array: A pointer to the first element in the array
  * @size: array size
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	/* Validate parameters */
	if (array == NULL)
	{
		return (-1);
	} /* End if */

	/*
	 * iterates until right >= left
	 * prints out the current range of the array being searched
	 */
	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			printf("%d, ", array[i]);
		} /* end for */
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
		{
			return (i);
		} /* end if */
		if (array[i] > value)
		{
			right = i - 1;
		} /* end if */
		else
		{
			left = i + 1;
		} /* end else */
	} /* End for */
	return (-1);
} /* End function */
