#include "lists.h"
#include <string.h>
/**
 * add_node - Fuction that adds a new node add the begining
 * @head: A pointer to the head node
 * @str: String pointer
 * Return: Return address of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

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
	new_node->next = *head;
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	*head = new_node;
	return (new_node);
}
