#include "main.h"
/**
 * create_array - The array function
 * @size: The size of the array
 * @c: The charater that will fill up the array
 * Return: Always an integer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
