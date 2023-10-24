#include "lists.h"
#include <stdlib.h>
/**
 * *add_nodeint -  function that adds a new node at
 * the beginning of a listint_t list.
 * @head: pointer to the pointer of the first node
 * @n: integer data for the new node
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nodeA;

	nodeA = (listint_t *)malloc(sizeof(listint_t));
	if (nodeA == NULL)
	{
		return (NULL);
	}
	nodeA->n = n;
	nodeA->next = *head;
	*head = nodeA;
return (nodeA);
}
