#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
/**
 * main - Entry point
 * Description: 'prints alphabet in reverse'
 * Return: Always 0 (success)
 */
int main(void)
{
	int j;

	for (j = 'Z'; j >= 'A'; j--)
	{
		putchar(tolower(j));
	}
	putchar('\n');
	return (0);
}
