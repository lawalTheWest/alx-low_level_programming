#include "main.h"

#include <ctype.h>

/**
 * _isalpha - Entry point
 * Description: 'check alphabet character'
 * @c: character being checked
 * Return: 1 if c is letter 0 if otherwise
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	return (0);
}
