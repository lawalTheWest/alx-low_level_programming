#ifndef LISTS_H
#define LISTS_H

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
}
list; /* End structure */

size_t print_list(const list_t *h);

/* task #1 */
size_t list_len(const list_t *h);

list_t *add_node(list_t **head, const char *str);

list_t *add_node_end(list_t **head, const char *str);

void free_list(list_t *head);

#endif
