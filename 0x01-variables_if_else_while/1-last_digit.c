#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * more headers goes there
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int hd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	hd = n % 10;
	if (hd > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, hd);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, hd);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, hd);
	}
	return (0);
}
