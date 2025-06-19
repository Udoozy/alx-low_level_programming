#include <stdio.h>
#include "main.h"
/**
 * get_endianness - The endianness function
 * Return: 1 if little and 0 otherwise
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *ptr = (char *)&x;

	if (*ptr == 1)
		return (1);
	else
		return (0);
}
