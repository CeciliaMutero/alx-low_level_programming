#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
<<<<<<< HEAD
 *  * main - check the code
 *   *
 *    * Return: Always EXIT_SUCCESS.
 *     */
int main(void)
{
	dlistint_t *head;
	dlistint_t *new;
	dlistint_t hello = {8, NULL, NULL};
	size_t n;

	head = &hello;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (EXIT_FAILURE);
	}
	new->n = 9;
	head->prev = new;
	new->next = head;
	new->prev = NULL;
	head = new;
	n = dlistint_len(head);
	printf("-> %lu elements\n", n);
	free(new);
	return (EXIT_SUCCESS);
=======
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *new;
    dlistint_t hello = {8, NULL, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        dprintf(2, "Error: Can't malloc\n");
        return (EXIT_FAILURE);
    }
    new->n = 9;
    head->prev = new;
    new->next = head;
    new->prev = NULL;
    head = new;
    n = dlistint_len(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (EXIT_SUCCESS);
>>>>>>> 96124ed80f86a044537e65a097a0e87b72d42ca2
}
