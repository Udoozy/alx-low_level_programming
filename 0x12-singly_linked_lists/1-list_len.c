#include "lists.h"
/**
 * list_len - Printd the number of element in a linked list
 * @h: A Head pointer
 * Return: Always the number of element
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
