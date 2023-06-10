#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * @argc: value
 * @argv: string
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	/* print the new name in string argv */
	printf("%s\n", *argv);

	return (0);
} /* end function */
