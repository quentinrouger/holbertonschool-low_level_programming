#include "lists.h"
/**
 * free_dlistint - print the len of a linked list
 * @head: pointer of the list
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	{
		free(head);
	}
	else
	{
		free_dlistint(head->next);
		free(head);
	}
}
