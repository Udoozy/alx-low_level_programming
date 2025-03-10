#include "main.h"
/**
 * _strspn - The function defined name
 * @s: The string to check for accepts
 * @accept: The accepted character
 * Return: Always an integer
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0;

	while (*s != '\0')
	{
		const char *a = accept;
		int found = 0;

		while (*a)
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
			a++;
		}
		if (!found)
		{
			break;
		}
		count++;
		s++;
	}
	return (count);
}
