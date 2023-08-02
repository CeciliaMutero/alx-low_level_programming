#include "main.h"
/**
 * sqrt_recursive - function that helps
 * in finding the square root
 * @n: number to find square root
 * @start: begginning of number
 * @end: end of number
 *
 * Return: Always 0 (success)
 */
int sqrt_recursive(int n, int start, int end)
{
	int mid;
	int square;

	if (start > end)
	{
		return (-1);
	}

	mid = start + (end - start) / 2;
	square = mid * mid;

	if (square == n)
	{
		return (mid);
	}
	else if (square > n)
		return (sqrt_recursive(n, start, mid - 1));
	else
		return (sqrt_recursive(n, mid + 1, end));
}
/**
 * _sqrt_recursion - function that returns the
 * natural square root of a number
 * @n: number to find square root
 *
 * return: Always 0 (success)
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
	return (-1);
	return (sqrt_recursive(n, 0, n));
}


