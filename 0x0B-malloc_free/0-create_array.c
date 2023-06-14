#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#define bool int
#define ERROR NULL
/**
 * *create_array - Entry point
 * @size: array size
 * @c: given character
 * Return: created array
 */
char *create_array(unsigned int size, char c)
{
	/* create the pointer to the new array */
	char *newArray = malloc(size);

	/* validate the parameters */
	if (size == 0 || newArray == 0)
	{
		return (ERROR);
	} /* end if */
	else
	{
		while (size--)
		{
			/*
			 * initialize all the memory address
			 * with the value of c
			 */
			newArray[size] = c;
		} /* end while */
		return (newArray);
	} /* end else */
} /* End function */
