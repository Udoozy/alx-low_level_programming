#include "lists.h"
/**
 * free_dlistint - The function to free nodes
 * @head: The head node pointer
 * Return: Return Void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
