#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *add_node - unction that adds a new node at
 * the beginning of a list_t list.
 * @head: pointer to a header pointer
 * @str: str to be duplicated
 *
 * Return: address of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nodeA;

	if (str == NULL)
	{
		return (NULL);
	}
	nodeA = (list_t *)malloc(sizeof(list_t));
	if (nodeA == NULL)
	{
		return (NULL);
	}
	nodeA->str = strdup(str);
	if (nodeA->str == NULL)
	{
		free(nodeA);
		return (NULL);
	}
	nodeA->len = strlen(str);
	nodeA->next = *head;
	*head = nodeA;
	return (nodeA);
}
