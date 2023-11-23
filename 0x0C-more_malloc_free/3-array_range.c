#include <stdlib.h>
#include "main.h"
/**
 * array_range - function that creates an array of integers.
 *
 * @max: max range.
 * @min: min range.
 *
 * Return: array of integers.
 *
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0;  min < (max + 1); i++)
	{
		arr[i] = min++;
	}
	return (arr);
}
