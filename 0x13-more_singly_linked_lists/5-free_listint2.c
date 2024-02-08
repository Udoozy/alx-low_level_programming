#include "lists.h"
/*
 * free_listint2 - Free a lists of litsint2
 * @head: Pointer to the first node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL || *head == NULL)
		return;
	while (*head->next != NULL)
	{
		ptr = *head->next;
		free(*head);
		*head = ptr;
	}
	free(*head);
	*head = NULL;
}
