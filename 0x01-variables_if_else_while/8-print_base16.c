#include <stdio.h>
/**
 * main - Prints numbers in base 16
 *
 * Return: Always return 0
 */
int main(void)
{
	int n;
	char m;

	for (n = 0; n <= 9; n++)
		putchar(n + '0');

	for (m = 'a'; m <= 'f'; m++)
		putchar(m);
	putchar('\n');
	return (0);
}
