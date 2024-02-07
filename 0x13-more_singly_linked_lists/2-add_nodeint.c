#include "lists.h"
/**
 * add_nodeint - Function that adds a new node at the beginning off a list
 * @head: Head pointer
 * @n: Number of nodes
 * Return: Return the address of a new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_ptr;

	if (head == NULL)
		return (NULL);

	new_ptr = malloc(sizeof(listint_t));
	if (new_ptr == NULL)
		return (NULL);
	if (*head == NULL)
		new_ptr->next = NULL;
	else
		new_ptr->next = *head;
	new_ptr->n = n;
	*head = new_ptr;
	return (*head);
}
