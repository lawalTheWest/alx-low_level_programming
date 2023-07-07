#include "main.h"

/**
 * get_bit - Entry point
 * Description: to a function
 * that returns the value of a bit at a given index
 * @n: number to check for bits in
 * @index: counter
 * Return: value of the bit, or -1 if there is an error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor;
	unsigned long int control;

	/* Validating parameters */
	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	} /* End if */

	divisor = 1 << index;
	control = n & divisor;

	if (control == divisor)
	{
		return (1);
	} /* End if */

	return (0);
} /* End function */
