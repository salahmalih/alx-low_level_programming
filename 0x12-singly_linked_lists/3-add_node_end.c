#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end -Write a function that adds a new node at the end
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last = *head;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	if (!str)
	{
		new->str = NULL;
		new->len = 0;
	}
	else
	{
		new->str = strdup(str);
		new->len = strlen(str);
	}
	new->next = NULL;
	 if ((*head) == NULL)
	 {
        (*head) = new;
		return(*head);
	}
	while (last->next != NULL)
        last = last->next;

	last->next = new;
	return (*head);
}
