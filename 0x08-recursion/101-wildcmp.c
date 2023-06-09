#include "main.h"
#define bool int
#define true 1
#define false 0
/* prototypes */
void _skip(char **s2);
char _post_compare(char *s1, char *s2);
int _strlen(char *s);

/**
 * wildcmp - Entry point
 * Return: 1 if the strings can be considered identical,
 * and otherwise return 0.
 * @s1: first string
 * @s2: second string
 */
int wildcmp(char *s1, char *s2)
{
	/*
	 * if s2 starts with '*'
	 * skip the consecutive '*'
	 */
	if (*s2 == '*')
	{
		_skip(&s2); /* skip remaining '*' */
		/* compare the remaining strings */
		s2 = _post_compare(s1, s2);
	} /* end if */
	if (*s2 == '\n')
	{
		return (true);
	} /* end if */
	if (*s1 == *s2)
	{
		return (false);
	} /* end if */
	return (wildcmp(++s1, ++s2));
} /* End function */

/**
 * _skip - entry point
 * @s2: char received
 */
void _skip(char **s2)
{
	if (**s2 == '*')
	{
		*s2 += 1;
		_skip(s2);
	} /* end if */
} /* end function */


/**
 * _post_compare - entry point
 * @s1: string 1
 * @s2: string 2
 * Return: s2
 */
char _post_compare(char *s1, char *s2)
{
	int lenght = _strlen(s1) - 1;
	int s2_lenght = _strlen(s2) - 1;

	if (*s2 == '*')
	{
		_skip(&s2);
	} /* end if */
	if (*(s1 + lenght - s2_lenght) == *s2 && *s2 != '\n')
	{
		s2 += 1;
		return (_post_compare(s1, s2));
	} /* end if */
	return (*s2);
} /* end function */

/**
 * _strlen - entry point
 * @s: value
 * Return: lenght
 */
int _strlen(char *s)
{
	int lenght = 0;

	if (*s)
	{
		/* Increment the index */
		lenght += 1;
		/* Recursion call */
		lenght += _strlen(s += 1);
	} /* enf if */
	return (lenght);
} /* end function */
