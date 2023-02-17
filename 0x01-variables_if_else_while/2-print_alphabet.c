#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: 'this program prints the alphabet in lowercase'
 * Return: Always 0 (success)
 */
int main(void)
{
	int ;
	for(j = 'A'; j <= 'Z'; j++)
	{
		j = tolower(j);
		putchar(j);
		putchar('\n');
	}
	return 0;
}
