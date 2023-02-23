#include <stdio.h>

/**
 * main - Print sum of all multiples of 3 or 5 upto 1024
 *
 * Return: Always 0
 */

int main(void)
{
	int n, x = 0;

	while (n < 1024)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			x += n;
		}
		n++;
	}
	printf("%d\n", x);
	return (0);
}
