#include "lists.h"
#include <stdlib.h>
/**
 * free_list - Frees a list_t list
 * @head: A pointer to the head of the list
 * Description: This function frees all the nodes in the list. It
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
