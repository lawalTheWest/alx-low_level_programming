#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Entry point to sum all arguments
 * @n: number of undefined arguments
 * Return: (sum)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args; /* declaring */
	unsigned int index  = 0; /* counter */
	unsigned int sum = 0; /* total sum */

	va_start(args, n);
	/*  validating arguments */
	if (n != 0)
	{
		for (; index < n; index++)
		{
			sum += va_arg(args, unsigned int);
		} /* end for*/
	} /* end if */
	/* free variable */
	va_end(args);

	return (sum);
} /* End function */
