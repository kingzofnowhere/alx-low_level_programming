#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - Singly linked list.
 * @str: string - malloc'ed string.
 * @next: points to the next node.
 * @len: length of the string.
 * Des: Singly linked list node str.
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
size_t print_list(const list_t *h);
void free_list(list_t *head);

#endif
