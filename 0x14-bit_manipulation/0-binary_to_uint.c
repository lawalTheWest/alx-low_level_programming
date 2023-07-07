#include "main.h"

/**
 * binary_to_uint - Entry point
 * Description: to converts a binary to an unsigned integer
 * @b: pointer to the string container
 * Return: result == (unsigned integer || 0 if requirements failed)
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;

	/* Validating parameters */
	if (!b)
	{
		return (0);
	} /* End if */
	/*
	 * Validating parameters
	 * if b is NULL
	 */
	for (i = 0; b[i] != '\0'; i++)
	{
		/*
		 * validating parameters
		 * if there is one or more chars
		 *  in the string b that is not 0 or 1
		 *  return (0)
		 */
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		} /* End if */
	} /* End for */
	for (i = 0; b[i] != '\0'; i++)
	{
		result <<= 1;
		if (b[i] == '1')
			result += 1;
	} /* End for */
	return (result);
} /* End function */
