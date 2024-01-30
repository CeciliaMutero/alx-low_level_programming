#include "lists.h"
/**
 * dlistint_len - function that returns the number of
 * elements in a linked dlistint_t list.
 * @h: pointer to first node
 *
 * Return: Always 0 (success)
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}

