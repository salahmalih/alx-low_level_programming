#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ne;
	listint_t *temp = *head;

	ne = malloc(sizeof(listint_t));
	if (!ne)
		return (NULL);

	ne->n = n;
	ne->next = NULL;

	if (*head == NULL)
	{
		*head = ne;
		return (ne);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = ne;

	return (ne);
}
