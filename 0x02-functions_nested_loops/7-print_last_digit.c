#include "main.h"

/**
 * print_last_digit - Print last digit
 *
 * @r: number to be checked
 * Return: the last digit number
 */

int print_last_digit(int r)
{
	int lDigit;

	lDigit = r % 10;
	if (lDigit < 0)
	{
		lDigit *= -1;
	}
	_putchar(lDigit + '0');
	return (lDigit);

}
