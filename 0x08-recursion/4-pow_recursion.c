#include "main.h"
/**
 * _pow_recursion - Entry point
 * Return: If y is lower than 0,
 * the function should return -1
 */
#define bool int
#define ERROR -1

int _pow_recursion(int x, int y)
{
	int counter;
	int result = 1;

	if (y < 0)
	{
		/* using the bool value above */
		return (ERROR);
	} /* end if */
	else
	{
		for (counter = 1; counter <= y; counter += 1)
		{
			result *= x;
		} /* end for */

		return (result);
	} /* end else */
} /* End function */
