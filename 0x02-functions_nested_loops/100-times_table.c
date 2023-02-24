#include "main.h"
#include <stdlib.h>

/**
 * print_times_table - times table for n
 *
 * @n: value of table to be printed starting from 0
 *
 * Return: void
 */

void print_times_table(int n)
{
	int num, multi, prod;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (multi = 1; multi <= n; multi++)
			{
				_putchar(',');
				_putchar(' ');
				prod = num * multi;
				if (prod <= 99)
				{
					_putchar(' ');
				}
				if (prod <= 9)
				{
					_putchar(' ');
				}
				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar((prod / 10) % 10 + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + '0');
				}
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
