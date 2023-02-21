#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: print alphabet.
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
	return (0);
}
