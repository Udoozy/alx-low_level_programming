#include <stdio.h>
#include "lists.h"
/**
 * print_list - Prints all elements of lits_t
 * @h: An Arguments
 * Return: Return the number of Element
 */
size_t print_list(const list_t *h)
{
	size_t m = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u]%s\n", h->len, h->str);
		h = h->next;
		m++;
	}
	return (m);
}
