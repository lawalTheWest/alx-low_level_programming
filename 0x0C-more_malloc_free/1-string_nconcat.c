#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Entry point
 * @s1: string
 * @s2: string
 * @n: the character determinant for s2
 * Return: new array of concatenated strings (ptr)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/* declaring and initializing counters and pointers */
	unsigned int w = 0;
	unsigned int x = 0;
	unsigned int y = 0;
	unsigned int z = 0;
	char *ptr;

	/* validating pparameters */
	if (s1 != NULL)
	{
		while (s1[w] != '\0')
			w++; /* end while */
	} /* end if */
	if (s2 != NULL)
	{
		while (s2[x] != '\0')
			x++; /* end while */
	} /* end if */
	if (n >= (x + 1))
		n = x; /* end if */
	ptr = malloc(w + n + 1 * sizeof(char));
	if (ptr == NULL)
		return (NULL); /* End if */
	for (; y <= (w - 1); y++)
	{
		ptr[w] = s1[z];
		z++;
	} /* end for */
	for (; z <= (n); z++)
	{
		ptr[w] = s2[z];
		y++;
	} /* end for */
	ptr[y] = '\0';
	return (ptr);
} /* End function */
