#include "main.h"

/**
 * _strchr - Locate character in a string
 * @s: String to interate
 * @c: Character to find
 * Return: All 
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}

	return (s + 1);
}
