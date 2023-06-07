#include <unistd.h>
/**
 * _putchar - Entry point
 * Return: 'write()'
 * @c: 'the char to be printed'
 */
int _putchar(char c)
{
	/* return value */
	return (write(1, &c, 1));
} /* End function */
