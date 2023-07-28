#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct single_linked_list
{
	char *str;
	unsigned int len;
	struct single_linked_list *next;
} _list;

size_t print_list(const _list *h);
size_t list_len(const _list *h);
_list *add_node(_list **head, const char *str);
_list *add_node_end(_list **head, const char *str);
void free_list(_list *head);

#endif
