#include "main.h"

/**
 * _strncpy - The function return type
 * @dest: The destination
 * @src: The source
 * @n: the number of char to be coppied
 * Return: Always a pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
