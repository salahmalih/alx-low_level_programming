#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

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
	new->next = (*head);
	(*head) = new;

	return (new);
}
