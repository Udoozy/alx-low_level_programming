#include <stdio.h>
#include "main.h"
/**
 * print_times_table - This function prints times of a given num
 * @n: The Argument given
 */
void print_times_table(int n)
{
	int product;
	int i, j;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		_putchar('0');

		for (j = 1; j <= n; j++)
		{
			_putchar(',');
			_putchar(' ');
			product = i * j;

			if (product <= 99)
				_putchar(' ');
			if (product <= 9)
				_putchar(' ');

			if (product >= 100)
			{
				_putchar((product / 100) + '0');
				_putchar((product / 10) % 10 + '0');
			}
			else if (product <= 99 && product >= 10)
			{
				_putchar((product / 10) + '0');
			}
			_putchar((product % 10) + '0');

		}
		_putchar('\n');
	}
}
