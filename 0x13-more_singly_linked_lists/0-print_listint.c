#include "lists.h"
/**
 * print_listint - Print all element of listint
 * @h: An Argument for the head pointer
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t counter;

	if (h == NULL)
		return (0);
	for (counter = 0; h != NULL; counter++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (counter);
}
