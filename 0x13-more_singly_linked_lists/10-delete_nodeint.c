#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index- Function to delete at a given index
 * @head: The head pointer
 * @index: The index number to delete
 * Return: Return 1 if success or -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *ptr_to_delete;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		ptr_to_delete = *head;

		*head = (*head)->next;
		free(ptr_to_delete);
		return (1);
	}

	temp = *head;

	for (i = 0; i < index; i++)
	{
		if (temp == NULL || temp->next == NULL)
			return (-1);

		temp = temp->next;
	}

	ptr_to_delete = temp->next;
	if (ptr_to_delete == NULL)
		return (-1);

	temp->next = ptr_to_delete->next;
	free(ptr_to_delete);
	return (1);

}
