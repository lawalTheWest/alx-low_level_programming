#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *  *_strdup - return a pointer to a newly allocated space in memory
 *   @str: string
 *    Return: always 0 (success)
 */

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *m;

	if (str == NULL)
		return (NULL);
	for (; str[size] != '\0'; size++)
		;
	/*+1 on the size puts the end of string character*/
	m = malloc(size * sizeof(*str) + 1);

	if (m == 0)
		return (NULL);
		{
			for (; i < size; i++)
				m[i] = str[i];
		}
	return (m);
}
