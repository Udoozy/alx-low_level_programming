#include "main.h"
/**
 * string_toupper - function pointer
 * @str: The string that is to be converted
 * Return: Always return a pointer
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
