#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Entry point
 * @s1: 'string 1'
 * @s2: 'string 2'
 * Return: newArray containing the concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	int lenght1; /* lenght of string s1 */
	int lenght2; /* lenght of string s2 */
	int i = 0; /* counter */
	char *newArray; /* array of concatenated strings */

	/* validating parameters */
	if (s1 == NULL)
	{
		s1 = "\0";
	} /* end if */
	if (s2 == NULL)
	{
		s2 = "\0";
	} /* end if */
	lenght1 = _strlen(s1);
	lenght2 = _strlen(s2);
	newArray = malloc((lenght1 + lenght2) * sizeof(char) + 1);
	/* validate the new array */
	if (newArray == 0)
	{
		return (0);
	} /* end if */

	while (i <= (lenght1 + lenght2))
	{
		if (i < lenght1)
		{
			newArray[i] = s1[i];
		} /* end if */
		else
		{
			newArray[i] = s2[i - lenght1];
		} /* end else */
		i++;
	} /* end while */
	newArray[i] = '\0';
	return (newArray);
} /* End function */

/**
 * _strlen - gets length of a string
 * @s: string
 * Return: string lenght
 */
int _strlen(char *s)
{
	int strLenght;

	while (s[strLenght] != 0)
	{
		strLenght++;
	} /* end while */
	return (strLenght);
} /* End function */
