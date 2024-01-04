#include "main.h"
/**
 * _puts - Prints trings to stdout
 * @str: String parameter
 * Return: Always 0
 */
void _puts(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
		_puts(str[n]);
}
