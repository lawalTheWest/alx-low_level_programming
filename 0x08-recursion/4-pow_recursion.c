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
	int pow;

	if (y < 0)
	{
		/* using the bool value above */
		return (ERROR);
	} /* end if */
	else
	{
		if (y == 0)
		{
			return (1);
		} /* end if */
		else
		{
			pow = x;
			pow *= _pow_recursion(x, y -= 1);
		} /* end else */
		return (pow);
	} /* end else */
} /* End function */
