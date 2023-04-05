#include "lists.h"
/**
 * free_list - print the len of a linked list
 * @head: pointer of the list
 */

void free_list(list_t *head)
{
	if (head == NULL)
	{
		free(head);
	}
	else
	{
		free(head->str);
		free_list(head->next);
		free(head);
	}
}
