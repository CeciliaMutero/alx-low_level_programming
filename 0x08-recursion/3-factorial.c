#include "main.h"
/**
 * factorial -  function that returns the factorial of a given number
 * @n: the number to calculate factorial
 *
 * Return: Always 0 (success)
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
