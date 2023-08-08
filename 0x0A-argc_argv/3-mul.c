#include <stdio.h>
#include <stdlib.h>
/**
 * main - main
 * @argc: number of command line arguments
 * @argv: command line arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int x = atoi(argv[1]);
	int y = atoi(argv[2]);
	int mul = x * y;

	if (argc == 3)
	{
		printf("%d\n", mul);
		return (0);
	}
	printf("Error\n");
	return (1);
}
