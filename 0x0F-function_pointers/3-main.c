#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - main
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	int result;
	char *operator = argv[2];
	int (*operation)(int, int);

	operation = get_op_func(operator);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}


	if (operation == NULL)
	{
		printf("Error\n");
		return (99);
	}

	result = operation(num1, num2);
	printf("%d\n", result);

	return (0);
}
