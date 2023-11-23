#include <stdlib.h>
#include "main.h"
char *_setZero(char *s, char b, unsigned int n);
/**
 * _calloc - Allocates memory for an array of
 * nmemb elements, each of size bytes.
 * @nmemb: Number of elements.
 * @size: Size of each element in bytes.
 *
 * Return: A pointer to the allocated memory, or NULL if nmemb or size is 0,
 * or if malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 && size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	_setZero(ptr, 0, nmemb * size);
	return (ptr);
}

/**
 * _setZero - Sets the first n bytes of
 * the memory area pointed to by s to zero.
 * @s: Pointer to the memory area.
 * @b: The byte to set.
 * @n: Number of bytes to set to the value.
 *
 * Return: A pointer to the memory area s.
 */
char *_setZero(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
