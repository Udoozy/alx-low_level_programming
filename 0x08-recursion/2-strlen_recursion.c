#include "main.h"
/**
 * _strlen_recursion - Printsstring lenght
 * @s: An Argument
 * Return: Always success
 */
int _strlen_recursion(char *s)
{
	int lent = 0;

	if (*s != '\0')
	{
		lent = lent + 1;
		lent = lent + _strlen_recursion(s + 1);

	}
	return (lent);
}
