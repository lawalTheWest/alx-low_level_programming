#include "main.h"
#include "unistd.h"
/**
 * _putchar - Entry point
 * Description: 'this function prints characters'
 * @c: 'the received char'
 * Return: character
 */
int _putchar(char c)
{
	/* Return value */
	return (write(1, &c, 1));
} /* End function */
