#include "main.h"
/**
 * print_diagonal - Prints diagonal lines
 *@n: Parameter
 * Return: Return void
 */
void print_diagonal(int n)
{
	int l;
	int m;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (l = 0; l < n; l++)
	{
		for (m = 0; m < n; m++)
		{
			if (m == l)
				_putchar('\\');
			else
				_putchar(' ');
		}
	}
}
