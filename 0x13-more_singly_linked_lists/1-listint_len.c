#include "lists.h"
/**
 * listint_len - function that returns the number of
 * elements in a linked listint_t list
 * @h: pointer to the first node
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t count = 0;

	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
return (count);
}
