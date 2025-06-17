#include <stdio.h>
#include "main.h"
/**
 * print_binary - The function the convert to base 2
 * @n: The number to be converted
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
