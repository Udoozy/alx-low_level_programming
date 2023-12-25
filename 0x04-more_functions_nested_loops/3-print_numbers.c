#include "main.h"
/**
 * print_numbers - Print from 0 to 9
 *
 * Return: Always return void
 */
void print_numbers(void)
{
	int k = 0

	while (k <= 9)
	{
		putchar(k + '0');
		k++;
	}
	putchar('\n');
	return (0);
}
