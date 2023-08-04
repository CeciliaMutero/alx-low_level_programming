#include "main.h"
#include <limits.h>
/**
 * _atoi - function that convert a string to an integer
 * @s: string
 *
 * Return: Always 0 (success)
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
{
	i++;
}
	if (s[i] == '-')
{
	sign = -1;
	i++;
}
	else if (s[i] == '+')
{
	i++;
}

while (s[i] >= '0' && s[i] <= '9')
{
	if (result > (INT_MAX - (s[i] - '0')) / 10)
	{
		return (sign == 1 ? INT_MAX : INT_MIN);
	}
	result = result * 10 + (s[i] - '0');
	i++;
}

return (result * sign);
}

