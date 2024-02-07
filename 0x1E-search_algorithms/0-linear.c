#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 * @array: array
 * @size: array size
 * @value: value to search for
 * Return: EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
        int a;

	/* Validate the parameters */
        if (array == NULL)
                return (-1); /* end if */

	/* We typecast size to int to loop through the array */
        for (a = 0; a < (int)size; a++)
        {
                printf("Value checked array[%u] = [%d]\n", a, array[a]);
                if (value == array[a])
                        return (a); /* End if */
        } /* End for */
        return (-1);
} /* End function */
