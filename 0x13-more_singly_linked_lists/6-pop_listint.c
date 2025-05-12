#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - The funtion to delete head node
 * @head: The head pointer
 * Return: Always the head data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(temp);
	temp = NULL;
	return (n);
}
