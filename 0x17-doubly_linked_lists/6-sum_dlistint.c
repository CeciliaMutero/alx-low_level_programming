#include "lists.h"
/**
 * sum_dlistint - function that returns the sum
 * of all the data (n) of a dlistint_t linked list
 * @head: points to the first node
 *
 * Return: Always 0 (success)
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
