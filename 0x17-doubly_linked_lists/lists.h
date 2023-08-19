#ifndef LISTS_H
#define LISTS_H

/* HEADER FILES */
#include <stdio.h>
#include <stdlib.h>

/* The STRUCT type to create a node */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t; /* END STRUCT */

/* Task 0 */
size_t print_dlistint(const dlistint_t *h);


#endif
