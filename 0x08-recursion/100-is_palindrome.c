#include "main.h"
#define bool int
#define true 1
#define false 0

/* Function Prototypes */
int _strlen_recursion(char *s);
int _palindrome_truthfullness(char *s, int lenght, int counter);

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


/**
 * _strlen_recursion - Entry point
 * Return: lenght of string
 * @s: pointer to string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		/* increment the lenght */
		len += 1;
		/* Recursion call */
		len += _strlen_recursion(s += 1);
	} /* end if */

	return (len);
} /* End function */

/**
 * _palindrome_truthfullness - Entry point
 * Return: zero (false) if check is false
 * and (true) if true
 * @s: string
 * @lenght: string lenght
 * @counter: index values
 */
int _palindrome_truthfullness(char *s, int lenght, int counter)
{
	/* divide the string into 2 */
	if (s[counter] == s[lenght / 2])
	{
		/* once the comparism is complete */
		return (true);
	} /* End if */
	else if (s[counter] == s[lenght - counter - 1])
	{
		/* recursion call to compare the chars */
		return (_palindrome_truthfullness(s, lenght, (counter + 1)));
	} /* end else if */
	return (false);
} /* end function */
