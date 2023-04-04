#include "lists.h"
/**
 * list_len - print the len of a linked list
 * @h: pointer of the list
 * Return: i
 */

size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
