#include "lists.h"

/**
  * sum_dlistint - returns sum of all data in a doubly linked list.
  * @head: pointer to head of dlist.
  *
  * Return: SUM or 0 if list is empty.
  */
int sum_dlistint(dlistint_t *head)
{
	int  sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
