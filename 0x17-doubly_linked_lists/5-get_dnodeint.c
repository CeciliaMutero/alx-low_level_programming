#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the
 * nth node of a dlistint_t linked list
 * @head: pointer to the first node
 * @index: index of the node
 *
 * Return: Always 0 (success)
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current->next != NULL)
	{
		if (count == index)
			return (current);
		current = current->next;
		count++;
	}
	return (NULL);
}
