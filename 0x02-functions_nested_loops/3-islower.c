#include "main.h"
#include <ctype.h>

/**
 * _islower - Entry point
 * @c: character being checked
 * Description: 'The functions checks and return value'
 * Return: 1 if int c is lowercase, 0 if otherwise
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
