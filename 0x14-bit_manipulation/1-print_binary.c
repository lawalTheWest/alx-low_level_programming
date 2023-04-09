#include "main.h"

/**
 * print_binary - Prints the binary rep of a num.
 * @n: The num to be printed in binary form.
 */

void print_binary(unsigned long int n)

{
	unsigned long int binRepNum = 0;
	unsigned long int count = 0;

	if (n == 0)
	{
		_putchar('0');
	}

	while (n > 0)
	{
		binRepNum = binRepNum << 1;
		binRepNum += n & 1;
		count++;
		n = n >> 1;
	}

	while (binRepNum > 0)
	{
		_putchar((binRepNum & 1) + '0');
		binRepNum = binRepNum >> 1;
		count--;
	}

	if (count > 0)
	{
		while (count != 0)
		{
			_putchar('0');
			count--;
		}
	}

}
