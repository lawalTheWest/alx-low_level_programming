#include <main.h>
#include <ctype.h>

/**
 * _islower - Entry point
 * Description: 'The functions checks and return value base on check the values'
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
