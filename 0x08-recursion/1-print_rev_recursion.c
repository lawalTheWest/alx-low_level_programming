#include "main.h"
/**
 * _print_rev_recursion - Entry point
 * Description: 'To print in reverse'
 * @s: 'the entered string'
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		/* 
		 * the recursive call happens
		 * untill the last char is reached
		 */
		_print_rev_recursion(s + 1);

		/* Print the results from the last char  */
		_putchar(*s);
	} /* End if */
} /* End function */
