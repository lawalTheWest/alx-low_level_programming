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
	int num;
	char j;

	for (num = 0; num < 10; num++)
	{
		putchar(48 + num);
	}
	for (j = 'A'; j <= 'F'; j++)
	{
		putchar(tolower(j));
	}
	putchar('\n');
	return (0);
}
