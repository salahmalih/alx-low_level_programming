#ifndef LISTS_H
#define LIST_H

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 */
typedef struct list_t list_t;
struct list_t
{
	char* str;
	int len;
	list_t *next;
};
size_t print_list(const list_t *h);
#endif