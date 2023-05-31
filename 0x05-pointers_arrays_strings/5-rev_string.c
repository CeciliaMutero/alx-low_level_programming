#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string
 * @*s: pointer to a string
 * Return: Always 0 (Success)
 */

void rev_string(char *s)

{

	int length = strlen(s);

	for (int i = 0; i < length / 2; i++)
	{
		char temp = s[i];

		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
