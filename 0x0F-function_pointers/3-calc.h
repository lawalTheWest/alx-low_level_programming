#ifndef HEADER_FILE
#define HEADER_FILE
/* INCLUDING THE HEADER FILES */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct op - Structure op
 * @op: The operator / * - + etc.
 * @f: The function associated
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
}
op_t;

/**
 * op_add - Entry point
 * @a: num1
 * @b: num2
 * Return: 0
 */

int op_add(int a, int b); /* assing two values */

/**
 * op_sub - Entry point
 * @a: num1
 * @b: num2
 * Return: 0
 */
int op_sub(int a, int b); /* subtracting a value from the other */

/**
 * op_mul - Entry point
 * @a: num1
 * @b: num2
 * Return: 0
 */
int op_mul(int a, int b); /* product */

/**
 * op_div - Entry point
 * @a: num1
 * @b: num2
 * Return: 0
 */

int op_div(int a, int b); /* division */

/**
 * op_mod - Entry point
 * @a: num1
 * @b: num2
 * Return: 0
 */

int op_mod(int a, int b); /* modulus of the */
/* prototype */
int (*get_op_func(char *s))(int, int);

#endif
