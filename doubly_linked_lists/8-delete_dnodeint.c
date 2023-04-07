#include "lists.h"
/**
 * delete_dnodeint_at_index - delete the node of somewhere in the index list
 * @head: list
 * @index: place in the index
 * Return: 1 if true  -1 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *nextNode, *rmNode;
	unsigned int i;

	temp = *head;
	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			return (-1);
		}
		if (temp->next == NULL)
		{
			temp->prev->next = NULL;
			free(temp);
			return (1);
		}
		rmNode = temp->prev;
		nextNode = temp->next;
		rmNode->next = nextNode;
		nextNode->prev = rmNode;
		free(temp);
	}
	return (1);
}
