#include "main.h"
/**
 * print_rev - Print string in a reverse order
 *@s: Parameter
 * Return: Always void
 */
void print_rev(char *s)
{
	int lent = 0;
	int m;

	while (*s != '\0')
	{
		lent++;
		s++;
	}
	s--;
	for (m = lent; m > 0; m--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
