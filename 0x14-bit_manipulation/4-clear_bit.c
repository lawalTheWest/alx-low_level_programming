#include "main.h"

/**
 * clear_bit - Entry point
 * Description: to a function
 * that sets the value of a bit to 0 at a given index.
 * @n: set quantity (num of set)
 * @index: index counter
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int result;

	/* validating parameters */
	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	} /* end if */
	result = ~(1 << index);
	*n = *n & result;
	return (1);
} /* End function */
