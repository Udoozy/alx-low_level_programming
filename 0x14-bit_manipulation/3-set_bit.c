#include <stdio.h>
#include "main.h"
/**
 * set_bit - Function that set bit to 1
 * @n: The pointer to the number
 * @index: The index number to be changed
 * Return: Always an integer
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned int) * 8)
		return (-1);

	*n = *n | (1UL << index);
	return (1);
}
