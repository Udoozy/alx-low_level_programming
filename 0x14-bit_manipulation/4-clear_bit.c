#include <stdio.h>
#include "main.h"
/**
 * clear_bit - The function that clear the bit
 * @n: The number to be converted and cleared
 * @index: The index number to be converted
 * Return: Return 1 on Success and -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned int) * 8)
		return (-1);

	*n = *n & ~(1UL << index);
	return (1);
}
