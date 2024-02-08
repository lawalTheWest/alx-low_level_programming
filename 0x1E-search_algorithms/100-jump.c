#include "search_algos.h"

/**
 * jump_search - searches for a value in an array
 * @array: input array
 * @size: array size
 * @value: value to search for.
 * Return: return the first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	int index, y, z, prev;

	/* validate parameters */
	if (array == NULL || size == 0)
		return (-1); /* End if */

	z = (int)sqrt((double)size);
	y = 0;
	prev = index = 0;

	/*
	 * loop as long as index is less than the size of the array
	 * and the value at the current index is less than the target value.
	 * print the value being checked at the current index
	 */
	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index); /* End if */
		y++;
		prev = index;
		index = y * z;
	} while (index < (int)size && array[index] < value);
	/* end do_while */

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	/*
	 * performs a linear search within the
	 * identified range to find the target value.
	 */
	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev); /* End if */
	} /* end for */
	return (-1);
} /* End function */
