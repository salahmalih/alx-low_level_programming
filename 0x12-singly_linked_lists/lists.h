#ifndef LISTS_H
#define LIST_H

typedef struct list_t list_t;
struct list_t
{
	char* str;
	int len;
	list_t *next;
};
size_t print_list(const list_t *h);
#endif