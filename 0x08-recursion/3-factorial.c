#include "main.h"
/**
 * factorial - Prints a factorial of any given number
 * @n: An Argument
 * Return: Always return 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
