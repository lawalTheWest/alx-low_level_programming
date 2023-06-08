#include "main.h"
#define bool int
#define true 1
#define false 0
/**
 * is_palindrome - Entry point
 * Description: 'to check a string palindrome status'
 * @s: the string
 * Return: the truth value
 * true - (1) or
 * false - (0)
 */
int is_palindrome(char *s)
{
	/* the counter of the pointer index */
	int counter = 0;

	/*
	 * We write a custom function
	 * to get the string lenght
	 */
	int lenght = _strlen_recursion(s);

	if (!(*s))
		return (true);

	/*
	 * checking the truthfulness of the string
	 * if it is a palindrome or not
	 * using the the index value count,
	 * the lenght of string and the string
	 */
	return (_palindrome_truthfullness(s, lenght, counter));
} /* end function is_palindrome */
