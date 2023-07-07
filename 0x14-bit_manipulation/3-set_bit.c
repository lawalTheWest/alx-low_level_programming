#include "main.h"

/**
 * set_bit - Entry point
 * Description: sets the value of a bit to 1 at a given index
 * @index: index counter
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* declaring a container for the set value */
	unsigned long int result;

	/* Validating parameters for size */
	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	} /* end if */
	result = 1 << index;
	*n = *n | result;
	return (1);
} /* End function */
