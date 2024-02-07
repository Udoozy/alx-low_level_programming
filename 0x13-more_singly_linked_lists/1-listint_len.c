#include "lists.h"
/**
 * listint_len - Prints number of element
 * @h: An argument for head pointer
 * Return: Always number of element
 */
size_t listint_len(const listint_t *h)
{
	size_t counter;

	if (h == 0)
		return (0);
	for (counter = 0; h != NULL; counter++)
	{
		h = h->next;
	}
	return (counter);
}
