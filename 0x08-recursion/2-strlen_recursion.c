#include "main.h"
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
