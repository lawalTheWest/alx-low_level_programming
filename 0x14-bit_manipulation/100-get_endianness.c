#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)

{
	/*
	 * the endian term describes the order
	 * in which a sequence of bytes is stored in  memory.
	 */
	int endianValue = 1;
	char *y;

	y = (char *)&endianValue;

	return (*y);
}
