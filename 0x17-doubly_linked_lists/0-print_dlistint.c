#include "lists.h"
/**
 * print_dlistint - function that prints all
 * the elements of a dlistint_t list
 * @h: pointer to the first node
 *
 * Return: Always 0 (success)
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	printf("\n");
return (count);
}
