#include "main.h"
/**
 * _sqrt_recursive - function that returns the natural square root of a number
 * @n: number to look for square root
 * @low: int used
 * @high: int used
 *
 * Return: Always 0 (success)
 */
int _sqrt_recursive(int n, int low, int high)
{
	int mid = (low + high) / 2;
	int square = mid * mid;

	if (low > high)
	{
		return (-1);
	}

	if (square == n)
	{
		return (mid);
	}
	else if (square < n)
	{
		return (_sqrt_recursive(n, mid + 1, high));
	}
	else
	{
		return (_sqrt_recursive(n, low, mid - 1));
	}
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: integer used
 *
 * Return: Always 0 (success)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursive(n, 0, n));
}
