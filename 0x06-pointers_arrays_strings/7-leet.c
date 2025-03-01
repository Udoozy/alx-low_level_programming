#include "main.h"
/**
 * leet - The return type
 * @str: The string;
 * Return: Return a ponter
 */

char *leet(char *str)
{
	char mapping[128] = {0};
	int i = 0;

	mapping['a'] = '4';
	mapping['A'] = '4';
	mapping['e'] = '3';
	mapping['E'] = '3';
	mapping['o'] = '0';
	mapping['O'] = '0';
	mapping['t'] = '7';
	mapping['T'] = '7';
	mapping['l'] = '1';
	mapping['L'] = '1';

	while (str[i] != '\0')
	{
		if (mapping[(int)str[i]] != 0)
		{
			str[i] = mapping[(int)str[i]];
		}
		i++;
	}
	return (str);
}
