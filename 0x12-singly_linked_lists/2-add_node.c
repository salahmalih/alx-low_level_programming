#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * main - check the code
 *
 * Return: Always 0.
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