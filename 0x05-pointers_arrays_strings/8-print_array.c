#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers,
 * @a: pointer of integer value
 * @n: number of elements of the array to be printed
 * Return: Always 0 (Success)
 */

void print_array(int *a, int n)
{
	int index_of_array;

	for (index_of_array = 0; index_of_array < n; index_of_array++)
	{
		printf("%d", a[index_of_array]);
		if (index_of_array != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}

