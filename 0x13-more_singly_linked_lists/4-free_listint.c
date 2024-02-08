#include "lists.h"
/**
 * free_listint - Free a listint_t list
 * @head: Head pointer
 * Return: Return 0
 */
void free_listint(listint_t *head)
{
	listint_t *temp_ptr;

	if (head == NULL)
		return;
	while ((temp_ptr = head) != NULL)
	{
		head = head->next;
		free(temp_ptr);
	}
}
