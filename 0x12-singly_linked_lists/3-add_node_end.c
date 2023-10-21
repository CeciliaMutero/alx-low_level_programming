#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * *add_node_end - function that adds a new node
 * at the end of a list_t list.
 * @head: pointer to a pointer
 * @str: string to be copied
 *
 * Return: last node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nodeA;
	list_t *temp;

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
	nodeA->next = NULL;
	if (*head == NULL)
	{
		*head = nodeA;
	}
	else
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = nodeA;
	return (nodeA);
}
