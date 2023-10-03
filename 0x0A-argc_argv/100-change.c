#include <stdio.h>
#include <stdlib.h>
/**
 * main - main
 * @argc: argument count
 * @argv: command line arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int cents;
	int coin_values[] = {25, 10, 5, 2, 1};
	int num_coins;
	int total_coins;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	num_coins = sizeof(coin_values) / sizeof(coin_values[0]);

	total_coins = 0;

	for (i = 0; i < num_coins; i++)
	{
		while (cents >= coin_values[i])
		{
			cents -= coin_values[i];
			total_coins++;
		}
	}
	printf("%d\n", total_coins);
	return (0);
}
