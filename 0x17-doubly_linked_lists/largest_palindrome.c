#include "lists.h"
/**
 * find_largest_palindrome - Entry point
 * @digit_count: 'the number of digits to
 * be entered between and inclusive 2 to 9'
 * Return: the largest palindrome values
 */


int find_largest_palindrome(int digit_count)
{
	int largest_palindrome = 0;
	int i, j, product;
	int if1, if2;
	Range range = search_digit_count(digit_count);

	/* Validate Parameters */
	if (!(digit_count))
	{
		return (-1);
	} /* End if */

	if1 = range.if1;
	if2 = range.if2;

	/*
	 * Iterate through to get the
	 * palindromes and check for
	 * the largest
	 */
	for (i = if1; i < if2; i++)
	{
		for (j = if1; j < if2; j++)
		{
			product = i * j;
			if (is_palindrome(product) && product > largest_palindrome)
			{
				largest_palindrome = product;
			} /* End if  */
		} /* end for */
	} /* end for */
	return (largest_palindrome);
} /* End function */



Range search_digit_count(int digit_count)
{	Range range;

	switch (digit_count)
	{
		case 2:
			range.if1 = 10;
			range.if2 = 100;
			break;
		case 3:
			range.if1 = 100;
			range.if2 = 1000;
			break;
		case 4:
			range.if1 = 1000;
			range.if2 = 10000;
			break;
		case 5:
			range.if1 = 10000;
			range.if2 = 100000;
			break;
		case 6:
			range.if1 = 100000;
			range.if2 = 1000000;
			break;
		case 7:
			range.if1 = 1000000;
			range.if2 = 10000000;
			break;
		case 8:
			range.if1 = 10000000;
			range.if2 = 100000000;
			break;
		case 9:
			range.if1 = 100000000;
			range.if2 = 1000000000;
			break;
		default:
			printf("Value entered is too few my dear User\n");
			break;
	} /* end switch statements */
	return (range);
} /* End function */
