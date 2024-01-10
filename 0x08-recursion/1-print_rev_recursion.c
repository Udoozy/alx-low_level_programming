#include "main.h"
/**
 * _print_rev_recursion - Print string in a reverse order
 * @s: Argument
 * Return: Always 0 success
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
