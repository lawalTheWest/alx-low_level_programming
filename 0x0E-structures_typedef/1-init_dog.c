#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * init_dog - Entry point
 * @d: the struct object template
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* Validating parameters */
	if (d != NULL)
	{
		d -> name = name;
		d -> age = age;
		d -> owner = owner;
	} /* End if */
} /* END FUNCTION */
