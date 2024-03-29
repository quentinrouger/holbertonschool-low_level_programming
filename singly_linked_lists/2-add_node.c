#include "lists.h"

/**
  * _strlen - returns length of a string
  * @str: pointer to string
  *
  * Return: string length.
  */
int _strlen(const char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
		len++;

	return (len);
}

/**
  * add_node - adds a new node to beginning of a list_t list
  * @head: pointer to pointer to current list head
  * @str: string to be duplicated and put in new node.
  *
  * Return: pointer to new node or NULL if it fails.
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->next = *head;
	new_node->str = strdup(str);
	new_node->len = _strlen(str);

	*head = new_node;

	return (*head);
}
