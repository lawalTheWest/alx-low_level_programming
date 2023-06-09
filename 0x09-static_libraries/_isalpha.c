#include "main.h"
#define bool int
#define true 1
#define false 0
/**
 * _isalpha - Entry point
 * Description: 'it checked the type of value
 * if it is alphabet or not'
 * Return: boolean values
 * @c: 'the character to check'
 */
int _isalpha(int c)
{
	/* denoting the ASCII values */
	if (c >= 65 && c <= 122)
	{
		return (true);
	} /* end if */
	else
	{
		return (false);
	} /* End else */
} /* End function */
