#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - function that deletes the
 * head node of a listint_t
 * @head: pointer to pointer first node
 *
 * Return: Always (0) success
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int n = temp->n;

	if (head == NULL || *head == NULL)
		return (0);
	*head = (*head)->next;
	free(temp);
	return (n);
}
