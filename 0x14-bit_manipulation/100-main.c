#include "main.h"

/**
 * main - Entry point (test code)
 * Return: (0) on success
 */
int main(void)
{
	int n;

	n = get_endianness();
	if (n != 0)
	{
		printf("Little Endian\n");
	} /* end if */
	else
	{
		printf("Big Endian\n");
	} /* end else */
	return (0);
} /* end function */
