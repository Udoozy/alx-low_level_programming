#include "main.h"

/**
 * _memcpy - copy memmory area
 * @dest: The momory to copy to
 * @src: char array to copy from
 * @n: number of elements to copy
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter = 0;

	while (counter < n)
	{
		dest[counter] = src[counter];
		counter++;
	}

	return (dest);
}
