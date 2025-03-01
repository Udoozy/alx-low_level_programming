#include "main.h"
/**
 * cap_string - The function used for capitalizing
 * @str: The string to capitalize
 * Return: Always return a pointer
 */

char *cap_string(char *str)
{
	int i = 0;
	char separator[] = "\t\n,;.!?\"(){} ' '";

	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
	}

	while (str[i] != '\0')
	{
		int j;

		for (j = 0; separator[j] != '\0'; j++)
		{
			if (str[i] == separator[j] && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			{
				str[i + 1] -= 32;
			}
		}
		i++;
	}
	return (str);

}
