#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * @argc: arguments
 * @argv: args
 * Return: int
 */
int main(int argc, char *argv[])
{
	unsigned long mul;
	int i;
	int j;

	/* Validating parameters */
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	} /* end if */
	/* Iterating throgh to grab the values */
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				printf("Error\n");
				exit(98);
			} /* end if */
		} /* end for */
	} /* end for */

	/* calculation time */
	mul = atol(argv[1]) *  atol(argv[2]);
	printf("%lu\n", mul);

	return (0);
} /* End function */
