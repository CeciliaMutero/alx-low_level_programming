#include "lists.h"
/**
 * sum_listint - function that returns the sum of
 * all the data (n) of a listint_t linked list
 * @head: pointer to the first node
 *
 * Return: Always 0 (success)
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	size_t sum = 0;

	temp = head;
	if (temp == NULL)
		return (0);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
