#include "main.h"
/**
 * _strdup - The string dup function
 * @str: the source string
 * Return: Always pointer to char
 */
char *_strdup(char *str)
{
	int i, lent = 0;
	char *cpystr;

	if (str == NULL)
		return (NULL);

	while (str[lent] != '\0')
		lent++;

	cpystr = malloc(sizeof(char) * (lent + 1));
	if (cpystr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		cpystr[i] = str[i];
	}
	cpystr[lent] = '\0';
	return (cpystr);
}
