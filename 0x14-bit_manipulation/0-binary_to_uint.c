#include "main.h"
#include <string.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string
 *
 * Return: Always 0 (success)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	if (b == NULL)
		return (0);
	if (*b != '1' && *b != '0')
		return (0);
	while (*b)
	{
		result = (result * 2) + (*b - '0');
			b++;
	}
	return (result);
}
