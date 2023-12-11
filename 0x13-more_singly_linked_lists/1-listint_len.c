#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked.
 * @h: pointer to the list_t list to print
 * Return: Always size_t.
 */
size_t listint_len(const listint_t *h)
{
	int n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
