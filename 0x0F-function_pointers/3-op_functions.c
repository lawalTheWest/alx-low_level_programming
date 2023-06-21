#include "3-calc.h"

/**
 * op_add - entry point to the sum function
 * @a: value 1
 * @b: value 2
 * Return: sum
 */

int op_add(int a, int b)
{
	int sum = (a + b);

        return (sum);
} /* end function */

/**
 * op_sub - entry point to the differences function
 * @a: first integer
 * @b: second integer
 * Return: difference
 */

int op_sub(int a, int b)
{
	int difference = (a - b);

        return (difference);
} /* End function */

/**
 * op_mul - entry point to the product function
 * @a: first value
 * @b: second value
 * Return: product
 */

int op_mul(int a, int b)
{
	int product = (a * b);

        return (product);
} /* end function */

/**
 * op_div - entry point to the division function
 * @a: num1
 * @b: num2
 * Return: division
 */

int op_div(int a, int b)
{
	int division = (a / b);
        return (division);
} /* end function */

/**
 * op_mod - calculates the remainder of the division of two integers
 * @a: first integer
 * @b: second integer
 * Return: remainder of a divided b
 */

int op_mod(int a, int b)
{
	int modulus = (a % b);
        return (modulus);
} /* End function */
