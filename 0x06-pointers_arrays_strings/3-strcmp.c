#include "main.h"

/**
 * _strcmp - Entry point
 * Description: ' compares two strings'
 * @s1: string 1
 * @s2: string 2
 * Return: the value compared
 */

int _strcmp(char *s1, char *s2)
{
	int n;

	for (n = 0; s1[n] != '\0'; n++)
	{
		if (s1[n] > s2[n])
			return (s1[n] - s2[n]);
		if (s2[n] > s1[n])
			return (s1[n] - s2[n]);
	}
	return (0);
}
