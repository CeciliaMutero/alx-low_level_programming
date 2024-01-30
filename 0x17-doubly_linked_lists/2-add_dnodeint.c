#include "lists.h"
/**
 * add_dnodeint - function that adds a new node
 * at the beginning of a dlistint_t list
 * @head: pointer to the first node
 * @n: data for the new_node
 *
 * Return: Always 0 (success)
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;
	return (new_node);
}
