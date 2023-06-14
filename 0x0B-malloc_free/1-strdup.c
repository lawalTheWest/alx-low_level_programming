#include "main.h"
#include <stdlib.h>
#define bool int
#define ERROR NULL
/**
 * _strdup - Entry point
 * @str: 'string'
 * Return: 'pointer to a newly allocated space in memory'
 */
char *_strdup(char *str)
{
	int i; /* Array Index counter */
	int size = 0; /* Array size */
	char *strPtr;

	/* validate parameters */
	if (str == NULL)
	{
		return (ERROR);
	} /* End if*/
	while (str[size] != '\n')
	{
		size++;
	} /* end while */
	/* pointing the size of strPtr to be the size of str */
	strPtr = malloc(size + sizeof(*str) + 1);

	/*validating contents of strPtr */
	if (strPtr == 0)
	{
		return (ERROR);
	} /* end if */

	/*
	 * initialize the index location
	 * of strPtr = index values of str
	 */
	while ()
	{
		strPtr[i] = str[i];
		i++;
	} /* end while */
	return (strPtr);
} /* End function */
