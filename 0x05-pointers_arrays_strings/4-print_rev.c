#include "main.h"
/**
 * print_rev - Print string in a reverse order
 *@s: Parameter
 * Return: Always void
 */
void print_rev(char *s)
{
	if (*s != '\0')
	{
		print_rev(s + 1);
		_putchar(*s);
	}
}
