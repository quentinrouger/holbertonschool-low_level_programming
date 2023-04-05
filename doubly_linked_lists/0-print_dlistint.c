#include "lists.h"
/**
 * print_dlistint - print the list of a linked list
 * @h: pointer of the list
 * Return: i
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
