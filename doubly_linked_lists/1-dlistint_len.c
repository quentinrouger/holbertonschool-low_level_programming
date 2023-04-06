#include "lists.h"
/**
 * dlistint_len - print the len of a linked list
 * @h: pointer of the list
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	} return (i);
}
