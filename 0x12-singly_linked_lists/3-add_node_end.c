#include "lists.h"
#include <string.h>
/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: A pointer to the head of the list
 * @str: The string to be added
 * Return: The address of the new element, or NULL if it failed
 * Description: This function creates a new node, duplicates the string
 * passed to it, and adds the new node at the end of the list. If the
 * allocation fails, it returns NULL. If the head is NULL, it creates
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;

	return (new_node);
}
