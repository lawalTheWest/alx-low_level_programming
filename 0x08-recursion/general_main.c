#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * Return: Zero (0)
 */
int main(void)
{
	int n;
	int r;

	/* to test task #0 */
	_puts_recursion("This is my code to test my created function.\n\n");

	/* to test task #1 */
	_print_rev_recursion("\n\n\nThis is my code to test my created function.");

	/* to test task #2 */
	n = _strlen_recursion("This is my code to test my created function.");
	printf("%i \n", n);
	_putchar(48 + n);
	_putchar('\n');
	_putchar('\n');
	_putchar('\n');

	/* task #3 */
	r = factorial(1);
	printf("%d\n", r);
	r = factorial(5);
	printf("%d\n", r);
	r = factorial(10);
	printf("%d\n", r);
	r = factorial(-1024);
	printf("%d\n", r);

	return (0);
} /* End main */
