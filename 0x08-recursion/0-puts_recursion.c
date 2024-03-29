#include "main.h"
/**
 * _puts_recursion - Print strings
 * @s: An Argument
 * Return: Always void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
