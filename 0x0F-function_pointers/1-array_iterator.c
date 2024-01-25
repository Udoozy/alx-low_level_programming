#include "function_pointers.h"
/**
 * array_iterator - Prints and Execute every array given
 * @array: An Array argument
 * @size: An argment size
 * @action: A function pointer
 * Return: Either 1 or -1
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array == NULL || action == NULL)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
