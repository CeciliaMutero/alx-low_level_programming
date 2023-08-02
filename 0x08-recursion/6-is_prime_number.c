#include "main.h"
/**
 * is_divisible - functions that helps in
 * checking for prime number
 * @n: number to be checked
 * @divisor: number to divide with
 *
 * Return: Always 0 (success)
 */

int is_divisible(int n, int divisor)
{
	if (divisor <= 1)
		return (0);
	else if (n % divisor == 0)
		return (1);
	else
		return (is_divisible(n, divisor - 1));
}
/**
 * is_prime_number - function that checks
 * for prime number
 * @n: number to calculate
 *
 * Return: Always 0 (success)
 */

int is_prime_number(int n)
{
	if (n <= 1)
	return (0);
	return (!is_divisible(n, n - 1));
}

