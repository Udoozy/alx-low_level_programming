#include <stdio.h>
#include <string.h>
/**
 * _strcpy - Copy string pointed to by src to a buffer ponted to by dest
 * @dest: First argument
 * @src: Second argument
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
	int *n = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (n);
}
