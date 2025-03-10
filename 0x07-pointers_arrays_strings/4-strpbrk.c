#include "main.h"
/**
 * _strpbrk - The fuction defined name
 * @s: The string to interat
 * @accept: The pionter for the parttern
 * Return: Return NULL if no match or pointer otherwise
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}

		s++;
	}
	return (0);
}
