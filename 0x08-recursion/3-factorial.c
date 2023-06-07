#include "main.h"
/* Using the preprocessor to define boolean */
#define bool int
#define ERROR -1
/**
 * factorial - Entry point
 * Return: If n is lower than 0,
 * the function should return -1 to indicate an error
 * @n: 'value from user'
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (ERROR);
	} /* End if */
	else
	{
		if (n > 1)
		{
			return (n * factorial(n - 1));
		} /* end if */
		else
		{
			return (1);
		} /* end else */
		return (n * factorial(n - 1));
	} /* end else */
} /* Ends function */
