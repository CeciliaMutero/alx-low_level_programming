#include "lists.h"
/**
 * *get_nodeint_at_index - function that returns
 * the nth node of a listint_t linked list
 * @head: pointer to the first node
 * @index: index of the node
 *
 * Return: Always 0 (success)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;

	temp = head;

	if (temp == NULL)
		return (NULL);

	while (temp != NULL)
	{
		if (i == index)
		{
			return (temp);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
