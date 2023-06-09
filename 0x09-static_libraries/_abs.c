#include "main.h"
/**
 * _abs - Entry point
 * Description: Prints absolute values
 * Return: absolute value
 * @n: received value
 */
int _abs(int n)
{
	int abs_val;

	abs_val = n;
	/*
	 * if value n is -tive,
	 * convert to posoitive
	 * and return it.
	 */
	if (abs_val < 0)
	{
		abs_val *= (-1);
	} /* end if */
	return (abs_val);
} /* End function */
