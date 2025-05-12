#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: double pointer to the head of the list
 *
 * Description: This function frees a linked list and sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;
	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
	*head = NULL;
}
