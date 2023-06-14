#include "main.h"
/**
 * _strlen - gets length of a string
 * @s: string
 * Return: string lenght
 */
int _strlen(char *s)
{
	int strLenght;

	while (s[strLenght] != 0)
	{
		strLenght++;
	} /* end while */
	return (strLenght);
} /* End function */
