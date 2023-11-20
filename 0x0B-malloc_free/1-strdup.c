#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer,
 * to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: Memory for the new string is obtained
 *
 * Return: pointer.
 */

char *_strdup(char *str)
{
	int size, i;
	char *pnt;

	if (str == NULL)
		return (NULL);
	size = 0;
	while (str[size])
	{
		size++;
	}
	pnt = malloc(sizeof(char) * size);
	if (pnt == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		pnt[i] = str[i];
	}

	return (pnt);
}
