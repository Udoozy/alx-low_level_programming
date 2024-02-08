#include "lists.h"
/**
 * add_nodeint_end - Adds neww vode at the end
 * @head: Pointer to the first node
 * @n: Node integer
 * Return: The adress of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *ptr2;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		ptr2 = *head;
		while (ptr2->next != NULL)
		{
			ptr2 = ptr2->next;
		}
		ptr2->next = new_node;
	}
	return (new_node);
}
