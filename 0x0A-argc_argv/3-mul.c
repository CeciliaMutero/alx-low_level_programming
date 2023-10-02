#include <stdio.h>
#include <stdlib.h>
/**
 * main- main
 * @argc: argument count
 * @argv: command line arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int mult = atoi(argv[1]) * atoi(argv[2]);

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", mult);
	}
return (0);
}
