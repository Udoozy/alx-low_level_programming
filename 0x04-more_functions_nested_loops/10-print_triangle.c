#include "main.h"
/**
 * print_triangle - Print triangle with # symbol
 * @size: Parameter
 * Return void
 */
void print_triangle(int size)
{
	int l, m, k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (l = 1; l <= size; l++)
	{
		for (m = 1; m <= size - l; m++)
		{
			_putchar(' ');
		}
		for (k = 1; k <= l; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
