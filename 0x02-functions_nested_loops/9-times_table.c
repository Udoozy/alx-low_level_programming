#include <stdio.h>
#include "main.h"
/**
 * times_table - Prints 9 times table starting from 0
 *
 * Return: Always 0 success
 */
void times_table(void)
{
	int l, m;

	for (l = 0; l <= 9; l++)
	{
		for (m = 0; m <= 9; m++)
		{
			if ((l * m) > 9)
			{
				_putchar(l * m / 10 + '0');
				_putchar(l * m % 10 + '0');
			}
			else if (m != 0)
			{
				_putchar(' ');
				_putchar(l * m + '0');
			}
			else
			{
				_putchar(l * m + '0');
			}
			if (m != 9)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
		_putchar('\n');
	}
}
