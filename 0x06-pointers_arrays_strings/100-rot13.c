#include "main.h"
/**
 * rot13 - The user defined function
 * @str: The string to be looped
 * Return: Always return a ponter to the string
 */
char *rot13(char *str)
{
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0, j;

	while (str[i] != '\0')
	{
		j = 0;
		while (alpha[j] != '\0')
		{
			if (str[i] == alpha[j])
			{
				str[i] = rot13[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
