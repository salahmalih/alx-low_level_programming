#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *tmp, *new, *ind;

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
		ind = ind->next;
		i++;
	}
	tmp = ind;
	new->next = tmp->next;
	ind->next = new;

	return (*head);
}