#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - function that concatenates two strings
 *
 *  @s1 : string one is obtained
 *	@s2 : string two is obtained
 *
 * Return: concatenates.
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, size, i, j;
	char *str;

	size1 = 0;
	size2 = 0;
	while (s1[size1])
		size1++;
	while (s2[size2])
		size2++;
	size = size1 + size2 + 1;
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < size ; i++)
	{
		str[i] = s1[i];
	}
	i = 0;
	while (str[i])
		i++;
	for (j = 0; s2[j] != '\0' ; j++, i++)
	{
		str[i] = s2[j];
	}

	return (str);
}
