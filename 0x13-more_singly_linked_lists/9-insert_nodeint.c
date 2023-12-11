#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *new, *ind;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
	new->next = (*head);
	(*head) = new;
	return (*head);
	}
	ind = (*head);
	while (ind && i < idx)
	{
		if (i == (idx - 1))
		{
			new->next = ind->next;
			ind->next = new;
			return (new);
		}
		else
			ind = ind->next;
		i++;
	}

	return (NULL);
}
