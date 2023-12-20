#include "main.h"
/**
 * jack_bauer - Prints jack br every minutes
 *
 * Return: Always success
 */
void jack_bauer(void)
{
	int l, m;

	for (l = 0; l < 24; l++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar(l / 10 + '0');
			_putchar(l % 10 + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar('\n');
		}
	}
}
