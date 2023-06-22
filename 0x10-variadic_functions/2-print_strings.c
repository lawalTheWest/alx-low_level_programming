#include "variadic_functions.h"

/**
 * print_strings - entry point to prints strings with a separator
 * @separator: strings separator
 * @n: number of undefined arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	/* declare variable args */
	va_list args;
	unsigned int i = 0;
	char *c;

	va_start(args, n);

	/* Iterating through the argument (string) */
	for (; i < n; i++)
	{
		c = va_arg(args, char*);
		/* Validating arguments and printing character */
		if (c != NULL)
		{
			printf("%s", c);
		} /* End if */
		else
		{
			printf("(nil)");
		} /* end else */

		/* validating arguments */
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		} /* End if */
	} /* End for */
	/* free variable args */
	va_end(args);

	putchar('\n');
} /* End Function */
