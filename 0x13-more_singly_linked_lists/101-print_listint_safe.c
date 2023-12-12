#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *tmp = head;
	listint_t *tp = NULL;
	size_t n = 0;
	size_t cur;

	while (tmp)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		n++;
		tmp = tmp->next;
		tp = head;
		cur = 0;
		while (cur < n)
		{
			if (tp == tmp)
			{
				printf("-> [%p] %d\n", (void *)tp, tp->n);
				return (n);
			}
			tp = tp->next;
			cur++;
		}
		if (!head)
			exit(98);
	}
	return (n);
}
