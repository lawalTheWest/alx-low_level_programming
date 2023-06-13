#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#define bool int
#define ERROR 1
#define SUCCESS 0
/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int num, j, result;
	int coins[] = {25, 10, 5, 2, 1}; /* given coins */

	/* validate input */
	if (argc != 2)
	{
		printf("Error\n");
		return (ERROR);
	} /* end if */

	/* convert string to integer */
	num = atoi(argv[1]);
	result = 0;

	/* handling values below 0 */
	if (num < 0)
	{
		printf("0\n");
		return (SUCCESS);
	} /* end if */

	for (j = 0; j < 5 && num >= 0; j++)
	{
		/* looping through the array contents */
		while (num >= coins[j])
		{
			/* increment to show the number of process */
			result++;
			/*
			 * decrement until num is
			 * less than the index value of the array
			 */
			num -= coins[j];
		} /* end while */
	} /* end for */

	printf("%d\n", result);
	return (SUCCESS);
} /* End function */
