#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list
 *
 * Return: no return
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *chr;

	if (head != NULL)
	{
		chr = *head;
		while ((temp = chr) != NULL)
		{
			chr = chr->next;
			free(temp);
		}
		*head = NULL;
	}
}
