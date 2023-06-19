#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - Entry point to lenght calculation
 * @str: string to counted
 * Return: 'the string lenght' = counter variable (i)
 */
int _strlen(char *str)
{
	int i = 0; /* index counter*/

	/*
	 * iterating through the array of string
	 * and keeping count
	 */
	for (; str[i] != '\0'; i++)
		;
	/* end for */
	return (i);
} /* End function */

/**
 * _strcpy - entry point to string copy
 * @cp_to: destination
 * @cp_from: source
 * Return: (destination)
 */

char *_strcpy(char *cp_to, char *cp_from)
{
	int i = 0; /* the counter */

	/* iterating through tom copy the characters */
	do {
		cp_to[i] = cp_from[i];
		i++; /* incrementing the counter */
	} while (cp_from[i] != '\0');

	cp_to[i] = '\0';

	return (cp_to);
} /* End function */

/**
 * new_dog - Entry point
 * @name: Name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	/* declaring variables */
	dog_t *new_dog; /* variable of data type struct  dog_t */
	int name_lenght; /* lenght of dog's name */
	int owner_lenght; /* lenght of owner's name */

	/* allocating space in memory */
	new_dog = malloc(sizeof(dog_t));
	/* validating parameters */
	if (new_dog == NULL)
	{
		return (NULL);
	} /* End if */
	name_lenght = _strlen(name); /* lenght of dog's name */
	new_dog->name = malloc(sizeof(char) * (name_lenght + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	} /* End if */
	new_dog->name = _strcpy(new_dog->name, name);

	owner_lenght = _strlen(owner);
	new_dog->owner = malloc(sizeof(char) * (owner_lenght + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	} /* end if */
	_strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog);
} /* End function */
