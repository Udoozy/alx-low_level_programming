#include "lists.h"
/**
 * sum_dlistint - The function name
 * @head: The head pointer
 * Return: Return the sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	temp = head;

	if (temp == NULL)
		return (0);

	while (temp->next != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	sum += temp->n;

	return (sum);
}
