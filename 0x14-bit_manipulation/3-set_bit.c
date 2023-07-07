#include "main.h"

/**
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* declaring a container for the set value */
	unsigned long int result;

	/* Validating parameters for size */
	if (index > (sizeof(unsigned long int) * 8 -1))
	{
		return (-1);
	} /* end if */
	result = 1 << index;
	*n = *n | result;
	return (1);
} /* End function */
