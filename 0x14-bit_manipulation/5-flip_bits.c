#include "main.h"

/**
 * flip_bits - num of different bits between two num(s)
 * @n: first num
 * @m: second num
 * Return: num of bits you would need to flip
 * to get from one num to another.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diffValue, check = 1;
	unsigned int counter = 0, i;

	diffValue = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (check == (diffValue & check))
			counter++;
		check <<= 1;
	}

	return (counter);
}
