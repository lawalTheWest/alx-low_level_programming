#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
/**
 * main - Entry point
 * Description: 'this program prints the alphabet in lowercase'
 * Return: Always 0 (success)
 */
int main(void)
{
	int j;

	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar(tolower(j));
	}
	putchar(\n);
	return (0);
}
