#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @*a: pointer to value of integer a
 * @*b: pointer to value of integer b
 * @a: first integer
 * @b: second integer
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)

{
	int var;

	var = *a;
	*a = *b;
	*b = var;
}
