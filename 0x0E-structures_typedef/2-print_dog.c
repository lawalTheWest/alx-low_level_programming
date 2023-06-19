#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Entry point
 * @d: dog object template
 */
void print_dog(struct dog *d)
{
	/* Validating parameters */
	if (d != NULL)
	{
		printf("Name: %s\n"
			"Age: %f\n"
			"Owner: %s\n",
			/* Validating parameters */
			((*d).name != NULL ? d -> name : "(nil)"),
			 (*d).age,
			 ((*d).owner != NULL ? d -> owner : "(nil)")
			);
	}/* End if */
} /* End function */
