#include "search_algos.h"
/**
 * linear_search - The linear search func name
 *
 * @array: The ponter to the array
 * @size: The number of element in array
 * @value: The first value of the search
 * Return: Always success
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (value == array[i])
		{
			return (i);
		}
	}
	return (-1);
}
