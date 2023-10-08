#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * is_valid_number - checks whether a given
 * string contains only valid digits
 * @str: string
 *
 * Return: Always 0 (success)
 */
int is_valid_number(const char *str)
{
        while (*str)
        {
                if (*str < '0' || *str > '9')
        {
                return (0);
        }
        str++;
        }
        return (1);
}
/**
 * multiply - multiplies two numbers
 * @num1: first string
 * @num2: second sttring
 *
 * Return: Always 0 (success)
 */
int multiply(const char *num1, const char *num2)
{
        int n1 = atoi(num1);
        int n2 = atoi(num2);

        return (n1 * n2);
}
/**
 * main - main
 * @argc: number of command arguments
 * @argv: command arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
        int result;

        if (argc != 3 || !is_valid_number(argv[1]) || !is_valid_number(argv[2]))
        {
        const char *error_message = "Error\n";

        while (*error_message)
        {
        _putchar(*error_message);
        error_message++;
        }
        return (98);
        }
result = multiply(argv[1], argv[2]);
        printf("%d\n", result);

        return (0);
}
