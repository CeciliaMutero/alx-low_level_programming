#include "main.h"
/**
 * _string_palindrome - function to help check
 * for palindrome
 * @s: string
 * @start: index for the first character of string
 * @end: index for the end of string character
 *
 * Return: Always 0 (success)
 */

int _string_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
return (_string_palindrome(s, start + 1, end - 1));
}
/**
 * is_palindrome - function that checks for palindrome
 * @s: string
 *
 * Return: Always 0 (success)
 */
int is_palindrome(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (_string_palindrome(s, 0, len - 1));
}
