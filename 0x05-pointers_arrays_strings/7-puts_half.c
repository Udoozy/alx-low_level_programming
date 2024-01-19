#include "main.h"
#include <string.h>
/**
 * puts_half - print the second half of a string
 * @str: An argument
 * Return: Always 0
 */
void puts_half(char *str)
{
	int lent = strlen(str);
	int half_str = lent / 2;
	int i;

	if ((lent % 2) != 0)
	{
		half_str += 1;
	}
	for (i = half_str; i < lent; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}

