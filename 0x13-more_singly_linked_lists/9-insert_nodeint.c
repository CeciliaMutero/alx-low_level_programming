#include "lists.h"
#include <stdlib.h>
/**
 * *insert_nodeint_at_index - function that inserts a new node
 * at a given position
 * @head: pointer to pointer first node
 * @idx: index of the list where the new node should be added
 * @n: data
 *
 * Return: Always 0 (success)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nodeA, *temp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	nodeA = malloc(sizeof(listint_t));
	if (nodeA == NULL)
		return (NULL);
	nodeA->n = n;

	if (idx == 0)
	{
		nodeA->next = *head;
		*head = nodeA;
        return (nodeA);
	}

	temp = *head;
	while (temp != NULL && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
	{
		free(nodeA);
		return (NULL);
	}

	nodeA->next = temp->next;
	temp->next = nodeA;

	return (nodeA);
}
