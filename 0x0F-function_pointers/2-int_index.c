#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - earches for an integer
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer to the comparing function
 *
 * Return: index of the first element for which
 * the cmp function does not return 0, or -1 if no match is found
 * or size is negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, index;

	if (!array || size == 0 || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		index = cmp(array[i]);
		if (index > 0)
			return (i);
	}
	return (-1);
}
