#include "3-calc.h"

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int arg1;
	int arg2;
	int result;
	char o;
	int (*func)(int, int); /* function pointer */

	/* validating arguments */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	} /* end if */

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	/* validating arguments */
	if (!func)
	{
		printf("Error\n");
		exit(99);
	} /* end if */

	o = *argv[2];

	/* Validating arguments */
	if ((o == '/' || o == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	} /* End if */

	result = func(arg1, arg2);

	printf("%d\n", result);
	return (0);
} /* End function */
