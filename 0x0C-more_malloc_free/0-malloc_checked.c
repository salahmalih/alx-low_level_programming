#include "main.h"
#include <stdlib.h>
/**
 * main - function that allocates memory using malloc
 *
 * @b: number of bytes to allocate
 *
 * Return:a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);
	if (c == NULL)
		exit(98);
	return c;
}
