#include "main.h"
/**
 * print_alphabet_x10 - Print 10x alphabets
 *
 * Return: Always return success
 */
void print_alphabet_x10(void)
{
	char a = 'a';
	int b = 0;

	while (b < 10)
	{
		while (a <= 'a')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		b++;
	}
}
