#include "lists.h"
/**
 * dlistint_len - Function the return lent of element
 * @h: The pointer to the first element
 * Return: Always return lent
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t numberofElement = 0;

	while (h != NULL)
	{
		numberofElement++;
		h = h->next;
	}
	return (numberofElement);
}
