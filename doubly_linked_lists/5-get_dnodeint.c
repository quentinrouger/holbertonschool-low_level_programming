#include "lists.h"
/**
  * get_dnodeint_at_index - returns nth node of a doubly linked list.
  * @head: pointer to head node.
  * @index: index
  *
  * Return: address of required node otherwise, NULL
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int  i;

	for (i = 0; i < index; i++)
	{
		if (head->next == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}
