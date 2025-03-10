#include "main.h"
/**
 * _memset - The return ponter
 * @s: The pointer to the string to copied
 * @b: The value to fill the memory with
 * @n: The number of byte that is to be filed
 * Return: Always a pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
