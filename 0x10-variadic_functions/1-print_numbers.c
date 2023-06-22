#include "variadic_functions.h"

/**
 * print_numbers - prints all numbers with a separator
 * @separator: separe numbers
 * @n: int, number of undefined arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0; /* index counter */

	va_start(args, n);

	/* iterating through arguments */
	for (; i < n; i++)
	{
		printf("%i", va_arg(args, int));

		/* validating arguments */
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		} /* end if */
	} /* End for */
	va_end(args); /* free args */

	putchar('\n');
} /* End function */
