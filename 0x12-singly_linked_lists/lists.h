#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * struct list_s - singly linked list
 * @str: the string
 * @len: lenght of str
 * @next: pointer to the next node
 */
typedef struct list_s
{
	char *str;
	unsigned int len;

	struct list_s *next;
} list; /* End structure */

size_t print_list(const list_t *h);

#endif
