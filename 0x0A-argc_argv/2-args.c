#include <stdio.h>
#include "main.h"
/**
 * main - Entry Point
 * @argc: arguments
 * @argv: array pointing to arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int counter = 0;

	while (counter < argc)
	{
		printf("%s\n", argv[counter]);
		counter++;
	} /* end while */

	return (0);

} /* end function */
