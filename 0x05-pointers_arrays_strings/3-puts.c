#include "main.h"
/**
 * _puts - Prints trings to stdout
 * @str: String parameter
 * Return: Always 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
