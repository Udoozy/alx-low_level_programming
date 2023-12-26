#include "main.h"
/**
 * print_diagonal - Prints diagonal lines
 *@n: Parameter
 * Return: Return void
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		for (x = 1; x <= n; x++)
		{
			for (y = 1; y <= x; y++)
			{
				if (y < x)
					_putchar(' ');
				else
					_putchar('\\');
			}
			_putchar('\n');
		}
	}
}
