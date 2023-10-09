#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *array_range - function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: always 0 (success)
 */

int *array_range(int min, int max)
{
	int num_elements;
	int *arr;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	num_elements = max - min + 1;

	arr = (int *)malloc(num_elements * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < num_elements; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
