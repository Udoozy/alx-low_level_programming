#include "main.h"
/**
 * print_line - Draw a staight line on the terminal
 *@n: Parameter
 * Return: Void return
 */
void print_line(int n)
{
	int m;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (m = 0; m < n; m++)
		_puchar('_');
	_putchar('\n');
}
