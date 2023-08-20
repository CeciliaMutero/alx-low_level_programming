#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - function that prints the opcodes
 * @start: character
 * @num_bytes: integer
 *
 * Return: Always o (success)
 */
void print_opcodes(unsigned char *start, int num_bytes)
{
	int i;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", start[i]);
	if (i != num_bytes - 1)
	{
		printf(" ");
	}
	}
	printf("\n");
}
/**
 * main - main
 * @argc: number of command arguments
 * @argv: arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes <= 0)
	{
		printf("Error\n");
		return (2);
	}

	unsigned char *main_ptr = (unsigned char *)main;
		print_opcodes(main_ptr, num_bytes);

	return (0);
}
