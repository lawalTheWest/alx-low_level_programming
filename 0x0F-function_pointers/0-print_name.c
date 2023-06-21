#include "function_pointers.h"
/* header file name adopted from the 0-main.c code */
#include <stdlib.h>
/**
 * print_name - Entry point with a void return type
 * @name: name to print
 * @f: function pointer of return type char
 */
void print_name(char *name, void (*f)(char *))
{
	/*
	 * Validating arguments
	 * if name and f are (null)
	 */
	if (!name || !f)
	{
		return; /* void */
	} /* End if */
	/* invoking using the function pointer */
	f(name);
} /* End function */
