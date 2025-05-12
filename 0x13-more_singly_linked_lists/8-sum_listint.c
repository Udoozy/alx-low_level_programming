#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_listint - The function to sum all the data in the list
 * @head: The head pointer
 * Return: Always the sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
