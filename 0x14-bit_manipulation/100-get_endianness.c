#include "main.h"

/**
 * get_endianness - Entry point
 * Description: to checks the endianness
 * Return: 0 if big endian, 1 if little endian
 * the check file will complement this code to check
 * the conditional atatements for type of
 * endianness
 */
int get_endianness(void)
{
	int endianess = 1;
	char *n;

	n = (char *)&endianess;

	return (*n);
} /* end function */
