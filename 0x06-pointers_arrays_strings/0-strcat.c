#include "main"
/**
 * _strcat - Function that concatenate two strings
 * @dest: An Argument
 * @src: Second Argument
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	char ptr_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest++ = src++;
	}
	*dest = '\0';
		return (ptr_dest);

}
