#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
/**
 * main - Entry point
 * Description: 'prints combination of number'
 * Return: Always 0 (success)
 */
int main(void)
{
	int j;
	char i = '0';

	for (j = '1'; j <= '9'; j++)
	{
		putchar(i);
		putchar(j);
		if (j != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
