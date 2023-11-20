#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
/**
*argstostr - concatenates all arguments of the program.
*@ac: argument count.
*@av: pointer to array of size ac.
*Return: NULL if ac == 0 or av == null, Pointer to new string.
*NULL on fail.
*/
char *argstostr(int ac, char **av)
{
	int i, j, len;
	char *arc;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		len += _strlen(av[i]);
	arc = (char *)malloc(len + 1);
	if (arc == NULL)
	{
		free(arc);
		return (NULL);
	}
	j = 0;
	for (i = 0; i < ac; i++)
	{
		_strncpy(arc + j, av[i], ac);
		j += _strlen(av[i]);
		arc[j++] = '\n';
	}
	arc[j] = '\0';
	return (arc);
}
