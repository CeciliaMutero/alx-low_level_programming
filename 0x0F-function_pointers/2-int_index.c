#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * int_index - function that searches for an integer
 * @array: pointer to array
 * @size: number of elements
 * @cmp: checks for integer
 *
 * Return: Always 0 (success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]) != 0)
	{
		return (i);
	}
	}
return (-1);
}
