#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates,
 * an @array of chars and initializes
 * @c:specific char
 * @size: the size of the memory to print
 *
 * Return: @array.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;
	if( size == 0)
		return NULL;
	array=malloc(sizeof(char)*size);
	if (array == NULL)
		return NULL;
	for(i=0; i < size;i++)
	{
		array[i]=c;
	}
	return array;
}
