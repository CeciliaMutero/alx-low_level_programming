#include "main.h"
/**
 * *_strcpy -  function that copies the string
 *
 * @dest: the destination string
 * @src: the source string
 *
 * Return: Always 0 (success)
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
return (dest);
}
