#include "main.h"
#define bool int
#define true 1
#define false 0
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
