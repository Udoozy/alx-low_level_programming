#include "main.h"
/**
 * _pow_recursion - Prints powers of x and y
 * @x: Argument 1
 * @y: Argument 2
 * Return: Always 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
