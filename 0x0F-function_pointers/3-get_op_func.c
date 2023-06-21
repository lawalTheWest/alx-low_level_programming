#include "3-calc.h"

/**
 * get_op_func - entry point (function pointer)
 * the operation asked by the user
 * @s: the operator given by the user
 * Return: pointer to the function that corresponds to the
 * operator given as a parameter
 */

int (*get_op_func(char *s))(int, int)
{
	/* the operators called function */
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	}; /* end struct type */

	int n = 0; /* counter */

	while (ops[n].op)
	{
		if (strcmp(ops[n].op, s) == 0)
		{
			return (ops[n].f);
		} /* end if */
		n++; /* counter increment */
	}
	return (NULL);
} /* end function */
