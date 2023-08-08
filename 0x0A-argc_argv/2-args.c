#include <stdio.h>
/**
 * main - main
 * @argc: number of command line arguments
 * @argv: command line arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
