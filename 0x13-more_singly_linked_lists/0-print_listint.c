#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_listint - function that prints all the
 * elements of a listint_t list
 * @h: pointer to first node
 *
 * Return: Always 0 (success)
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t count = 0;

	temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}

