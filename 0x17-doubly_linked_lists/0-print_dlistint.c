#include "lists.h"
/**
 * print_dlistint - The function that print all the elements
 * @h: The pointer that receives to the first node
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t numberNode = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		numberNode++;
		h = h->next;
	}
	return (numberNode);
}
