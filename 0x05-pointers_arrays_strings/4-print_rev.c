#include "main.h"
/**
 * print_rev - Print string in a reverse order
 *@s: Parameter
 * Return: Always void
 */
void print_rev(char *s)
{
	int lent = 0;
	int i;

	while (s[lent] != '\0')
	{
		s[lent]++;
	}
	for (i = lent - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
