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
	int n1,  n2;

	for (n1 = 0; n1 <= 99; n1++)
	{
		for (n2 = n1 + 1; n2 <= 99; n2++)
		{
			if (n1 != n2)
			{
				/* Print the first number */
				putchar(n1 / 10 + '0');
				putchar(n1 % 10 + '0');
				putchar(' ');
				/* Print the second number */
				putchar(n2 / 10 + '0');
				putchar(n2 % 10 + '0');
				if (n1 != 99 || n2 != 99)
				{
					/* If this is not the last combination, print the separator */
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
