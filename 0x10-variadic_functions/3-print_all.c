#include "variadic_functions.h"

/**
 * print_int - handles the intiger values
 * @args: arguments from print_all
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
} /* End function */

/**
 * print_float - handles the float values
 * @args: arguments from print_all
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
} /* End function */

/**
 * print_char - handles the character values
 * @args: arguments from print_all
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
} /* End function */

/**
 * print_str - prints string characters
 * @args: arguments from print_all
 */
void print_str(va_list args)
{
	char *s = va_arg(args, char *);

	/* Validating argument */

	s == NULL ? printf("(nil)") : printf("%s", s);
	/*
	 * if (s == NULL)
	 * {
	 * printf("(nil)");
	 * } end if
	 * else
	 * {
	 * printf("%s", s);
	 * } * end else
	*/

} /* End function */

/**
 * print_all - prints any type
 * @format: arguments to print
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	int j = 0;
	char *sep = "";

	formatStruct formatStruct1[] = {
		{ "i", print_int },
		{ "f", print_float },
		{ "c", print_char },
		{ "s", print_str },
		{NULL, NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (*formatStruct1[j].type == format[i])
			{
				printf("%s", sep);
				formatStruct1[j].printer(args);
				sep = ", ";
				break;
			} /* End if */
			j++;
		} /* End while */
		i++;
	} /* End while */

	printf("\n");
	va_end(args);
} /* End function */
