#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - main
 * @argc: number of command arguments
 * @argv: string containing command arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int num;
	int sum = 0;
	int i, j;

	if (argc == 1)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
	num = atoi(argv[i]);
	{
		if (num < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	}
	printf("%d\n", sum);
	return (0);
}

