#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = (*head);
	listint_t *ind = NULL;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	for (i = 0; tmp && i < index; i++)
	{
		ind = tmp;
		tmp = tmp->next;
	}
	if (tmp == NULL)
		return (-1);
	if (ind == NULL)
		*head = tmp->next;
	else
		ind->next = tmp->next;

	free(ind);
	return (-1);
}
