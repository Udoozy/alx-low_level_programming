#include "main.h"

/**
 * _memset - Memory set
 * @s: buffer 
 * @b: constant in byte
 * @n: number of bytes of memory area to fill
 * Description: Fill the first n bytes of the memory area pointed to by s
 * with the constant byte b.
 * Return: Pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		s[count] = b;
		count++;
	}

	return (s);
}
