#include "main.h"

/**
 * flip_bits - Entry point
 * Description: a function that returns the number
 * of bits you would need to flip
 * to get from one number to another
 * @n: first num
 * @m: second num
 * Return: num of bits you would need to flip
 * to get from one num to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diffValue;
	unsigned long int control = 1; /* to check */
	unsigned int counter = 0;
	unsigned int i;

	diffValue = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (control == (diffValue & control))
		{
			counter++;
		} /* End if */
		control <<= 1;
	} /* end for */

	return (counter);
} /* end function */
