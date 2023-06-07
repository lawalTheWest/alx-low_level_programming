#include "main.h"
/**
 * _puts_recursion - Entry point
 * @s: 'pointer to address
 * of the first char of the string'
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		/* custom putchar to print */
		_putchar(*s);

		/* the recursive event */
		_puts_recursion(s + 1);
	} /* End if */
	else
	{
		_putchar('\n');
	} /* end else */
} /* End function */
