#include "main.h"
#include <string.h>
/**
 * is_palindrome_recursive - function that checks
 * for palindrome
 * @s: string
 * @start: start of string
 * @end: end of string
 *
 * Return: Always 0 (success)
 */

int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] != s[end])
	{
		return (0);
	}
	return (is_palindrome_recursive(s, start + 1, end - 1));
}
/**
 * is_palindrome -  function that returns 1
 * if a string is a palindrome and 0 if not
 * @s: string
 * Return: Always 0 (success)
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (is_palindrome_recursive(s, 0, len - 1));
}
