#include "main.h"
#define bool int
#define ERROR -1
#define true 1
#define false 0
/* prototype */
int check_prime(int n, int divisor);

/**
 * is_prime_number - entry point
 * Return: values
 * @n: the user value
 */

int is_prime_number(int n)
{

	if (n < 0)
	{
		/* negative values are not allowed */
		return (false);
	} /* end if */
	else if (n < 2)
	{
		return (false);
	} /* end else if */
	else
	{
		return (check_prime(n, 2));
	} /* end else */
} /* end function  */

/**
 * check_prime - supplimentary code
 * Return: values
 * @n:  'value'
 * @divisor: the divide value
 */
int check_prime(int n, int divisor)
{
	int remainder = (n % divisor);

	if (remainder == 0)
	{
		return (false);
	} /* end if */
	if (divisor == n / 2)
	{
		return (true);
	} /* End if */
	return (check_prime(n, divisor += 1));
} /*  */
