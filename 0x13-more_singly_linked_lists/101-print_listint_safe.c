#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t count = 0;

	if (!head)
	{
		printf("Error: Unable to print list\n");
		exit(98);
	}

	slow = head;
	fast = head;

	while (fast && fast->next)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;

		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			exit(98);
		}
	}

	printf("[%p] %d\n", (void *)slow, slow->n);
	count++;

	return (count);
}
