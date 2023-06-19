#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Entry point
 * @d: the struct type
 */
void free_dog(dog_t *d)
{
	/* validating parameters */
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	} /* end if */
} /* End function */
