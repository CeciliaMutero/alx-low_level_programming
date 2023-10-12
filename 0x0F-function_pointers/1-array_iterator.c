#include <stdio.h>
#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator -  function that executes a function given as a
 * parameter on each element of an array
 * @array: pointer to the first element
 * @size: number of elements
 * @action: action to be done on each element
 *
 * void: Returns nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; ++i)
		action(array[i]);
}
