#include "main.h"
/**
 * _strcat - Function that concatenate two strings
 * @dest: An Argument
 * @src: Second Argument
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int m = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[m] != '\0')
	{
		dest[i] = src[m];
		i++;
		m++;
	}
	dest[i] = '\0';
		return (dest);

}
