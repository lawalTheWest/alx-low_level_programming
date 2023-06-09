#include "main.h"
/**
 * _strlen - Entry point
 * Description: 'this computes the lenght of string'
 * @s: string values
 * Return: the string lenght
 */
int _strlen(char *s)
{
	int lenght = 0;

	if (*s)
	{
		/* increment the lenght */
		lenght += 1;
		/* Recursion call */
		lenght += _strlen(s += 1);
	} /* End if */
	return (lenght);
} /* End function */
