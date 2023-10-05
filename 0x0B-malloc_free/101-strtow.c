#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * **strtow -  function that splits a string into words.
 * @str: string to be splitted
 *
 * Return: always 0 (success)
 */

char **strtow(const char *str)
{
	int word_index = 0;
	int num_words = 0;
	const char *delimiters = " ";
	char *copy = strdup(str);
	char *token = strtok(copy, delimiters);
	char **words;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}

	while (token != NULL)
	{
		num_words++;
		token = strtok(NULL, delimiters);
	}
	free(copy);

	words = (char **)malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	word_index = 0;
	copy = strdup(str);
	token = strtok(copy, delimiters);

	while (token != NULL)
	{
		words[word_index] = strdup(token);
		word_index++;
		token = strtok(NULL, delimiters);
	}

	words[num_words] = NULL;

	free(copy);

	return (words);
}

