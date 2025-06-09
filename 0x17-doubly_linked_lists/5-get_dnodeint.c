#include "lists.h"
/**
 * get_dnodeint_at_index - The Function name
 * @head: The head pointer
 * @index: The index number to be deleted
 * Return: Return the pointer to the index number
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	temp = head;

	for (i = 0; i < index; i++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	return (temp);
}
