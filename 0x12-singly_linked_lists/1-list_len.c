#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}