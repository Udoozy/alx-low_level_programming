#include "main.h"
/**
 * print_last_digit - Prints last digit of a number
 * @n: An argument
 * Return: Always return the last digit
 */
int print_last_digit(int n)
{
	int m = n % 10;

	if (m < 0)
		m = -m;
	_putchar (m + '0');
	return (m);
}
