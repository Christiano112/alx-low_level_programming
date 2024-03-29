#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: head of a list
 *
 * Return: numbers of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	size_t nnodes = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		nnodes++;
	}
	return (nnodes);
}
