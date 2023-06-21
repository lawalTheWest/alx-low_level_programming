#include <stdio.h>
#include <stdlib.h>

/**
 * main - main entry point
 * @argc: argument counter
 * @argv: vector
 * Return:  0
 */

int main(int argc, char *argv[])
{
	int i, n;

	/* Validating argument */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	} /* end if */
	n = atoi(argv[1]);
	/* validation */
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	} /* end if */
	for (i = 0; i < n; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < n - 1)
		{
			printf(" ");
		} /* end if */
		else
		{
			printf("\n");
		} /* end else */
	} /* end for */
	return (0);
} /* end function */
