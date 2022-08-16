#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list
 *
 * Return: head node's value
 */

int pop_listint(listint_t **head)
{
	int cnode;
	listint_t *h;
	listint_t *chr;

	if (*head == NULL)
		return (0);

	chr = *head;

	cnode = chr->n;

	h = chr->next;

	free(chr);

	*head = h;

	return (cnode);
}
