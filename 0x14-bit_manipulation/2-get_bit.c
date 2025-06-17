#include <stdio.h>
#include "main.h"
/**
 * get_bit - The function that return indexth of n
 * @n: The binary number
 * @index: The index number to be retuned
 * Return: Return an int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return ((n >> index) & 1);
}
