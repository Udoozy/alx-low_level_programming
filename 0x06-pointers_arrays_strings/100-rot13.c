#include "main.h"
/**
 * rot13 - The user defined function
 * @str: The string to be looped
 * Return: Always return a ponter to the string
 */
char *rot13(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		if ((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm'))
		{
			str[i] = (int)str[i] + 13;
		}
		else if ((str[i] >= 'N' && str[i] <= 'Z') ||
				(str[i] >= 'n' && str[i] <= 'z'))
		{
			str[i] = (int)str[i] - 13;
		}
		i++;
	}
	return (str);
}
