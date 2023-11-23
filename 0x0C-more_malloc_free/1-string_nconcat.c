#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - function that concatenates two strings.
 * @s1:String 1;
 * @s2:String 2;
 * @n:lenght.
 *
 * Return: concatenates.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len;
	unsigned int j, l;
	char *str;

	len = 0;
	i = 0;
	while (s1[len] != '\0')
		len++;
	while (s2[i] != '\0')
		i++;
	if (n >= i)
		n = i;
	str = malloc(sizeof(char) * (len + n + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		str[i] = s1[i];
	}
	for (j = i, l = 0; j < (n + i); j++, l++)
	{
		str[j] = s2[l];
	}
	str[len + n] = '\0';
	return (str);
}
