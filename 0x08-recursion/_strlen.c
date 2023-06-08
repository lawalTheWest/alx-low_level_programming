#include "main.h"
/**
 * _strlen - Entry point
 * Description: 'this fetches the lenght of the given string'
 * Return: the lenght of string
 * @s: the received string
 */
int _strlen(char *s)
{
	int lenght = 0; /* this is the counter variable */

	/*
	 * if points to the next address
	 * in the string
	 */
	if (*s)
	/* if (*s) */
	{
		/*
		 * increments to count
		 * the number of times
		 * the recursion occurs
		 */
		lenght += 1;

		/*
		 * a recursive call
		 * to count the index
		 * using the new incremented lenght size
		 */
		lenght += _strlen(s += 1);
	} /* end if */
	return (lenght);
} /* end function */
