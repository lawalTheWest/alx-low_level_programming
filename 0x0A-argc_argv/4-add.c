#include <stdio.h>
#include "main.h"
#define bool int
#define true 1
#define SUCCESS 0
/**
 * main - adds two positive number
 * @argc: number of arguments
 * @argv: array of arguents
 * Return: 0 (Success), or 1 (Success)
 */
int main(int argc, char *argv[])
{
	/* initialize variables */
	int sum, num, i, j, k;

	sum = 0; /* this stores the sum of positive numbers */
	/* validating inputs */
	for (i = 1; i < argc; i++)
	{
		/*
		 * Iterating over the arguments (argv)
		 * starting from index 1
		 * for each argument, we loop through
		 * each character to check if it is a digit
		 */
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				/*
				 * if the adress contains a
				 * non number character,
				 * it prints error
				 */
				puts("Error");
				return (true);
			} /* end if */
		} /* end for */
	} /* End for */
	/* loop through to add the positive numbers */
	for (k = 1; k < argc; k++)
	{
		/* converting the strings to intergers */
		num = _atoi(argv[k]);
		/* adding the positive numbers */
		if (num >= 0)
			sum += num; /* end if */
	} /* end for */
	/* printing the sum */
	printf("%d\n", sum);
	return (SUCCESS);
} /* End main function */

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i = 0; /* index */
	int d = 0; /* counter */
	int n = 0; /* converted string to integer */
	int len = 0;/* string lenght */
	int f = 0; /* consecutive numbers */
	int digit = 0; /* curent value */

	/* getting the lenght of input */
	while (s[len] != '\0')
	{
		len++;
	} /* end while */
	while (i < len && f == 0)
	{
		/* if character is negative */
		if (s[i] == '-')
			++d; /* end if */
		/* validating input to be digits */
		if (s[i] >= '0' && s[i] <= '9')
		{
			/* checking the ASCII equivalent */
			digit = s[i] - '0';
			/* if count is odd, make the value negative */
			if (d % 2)
				digit = -digit; /* End if */
			n = n * 10 + digit;
			f = 1; /* indicate the processing of a value */
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			} /* end if */
			f = 0;
		} /* end if */
		i++;
	} /* end while */
	if (f == 0)
	{
		return (0);
	} /* end if */
	return (n);
} /* End main function */
