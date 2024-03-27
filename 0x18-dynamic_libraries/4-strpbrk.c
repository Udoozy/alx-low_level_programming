#include "main.h"

/**
 * _strpbrk - Search for a string in a particular set bytes.
 * @s: String arg
 * @accept: Strings that matches 'accepts'
 * Return: Pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *ptr;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				ptr = &s[i];
				return (ptr);
			}
			j++;
		}
		i++;
	}

	return (0);
}
