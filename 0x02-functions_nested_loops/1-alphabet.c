#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Print alphabets in lower case
 *
 * Return: ALways r
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
