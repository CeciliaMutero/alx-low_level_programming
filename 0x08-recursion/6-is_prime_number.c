#include "main.h"
int actual_prime(int n, int i);

/**
 * actual_prime - determines if a number is prime
 * @n: number used
 * @i: iterator
 * Return: 1 if n is prime 0 if otherwise
 */

int is_prime_number(int n);

/**
 * is_prime_number - says if an integer  is prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is prime number 0 if otherwise
 */

int is_prime_number(int n)
{
	if(n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}

