#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a
 * 2 dimensional array of integers.
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to a 2 dimensional array
 * return null if failure
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);

		if (ptr[i] == NULL)
		{
			for (; i >= 0; i--)
				free(ptr[i]);

			free(ptr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (k = 0; k < width; k++)
			ptr[i][k] = 0;
	}
	return (ptr);
}
