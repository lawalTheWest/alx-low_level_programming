#ifndef HEADER_H
#define HEADER_H
#include <stdio.h>
#include <string.h>

/**
 * struct listint_s - structure (linked list)
 * @n: integer
 * @next: a pointer to the next node.
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
size_t print_listint(const listint_t *h);


#endif
