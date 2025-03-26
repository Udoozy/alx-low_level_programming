#include "main.h"
#include "stdlib.h"
/**
 * _strchr - The function name
 * @s: The String pointer
 * @c: The charater the be searched
 * Return: Always a pointer
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
		return (s);

	return (NULL);
}
