#include "lists.h"
/**
 * insert_dnodeint_at_index - The function name
 * @h: The pointer to the head pointer
 * @idx: The index number where to insert
 * @n: The number of the new node
 * Return: Return pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *temp = *h;
	unsigned int i;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; i < idx - 1 && temp != NULL; i++)
		temp = temp->next;

	if (temp == NULL)
		return (NULL);

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	newNode = malloc(sizeof(dlistint_t));

	newNode->n = n;
	newNode->next = temp->next;
	newNode->prev = temp;

	temp->next->prev = newNode;
	temp->next = newNode;

	return (newNode);
}
