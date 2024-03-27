#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: string1
 * @src: string2
 * @n: Number of Element to concatenate
 * Return: Always Success
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int m;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (m = 0; src[m] != '\0' && n > 0; m++, n--, i++)
	{
		dest[i] = src[m];
	}
	return (dest);
}
