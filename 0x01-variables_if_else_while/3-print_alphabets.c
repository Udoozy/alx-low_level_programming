#include <stdio.h>
/**
 * main - Prints alphabet in lower and upper case
 *
 * Return: Always return 0
 */
int main(void)
{
	char n, m;

	for (n = 'a'; n <= 'z'; n++)
		putchar(n);

	for (m = 'A'; m <= 'Z'; m++)
		putchar(m);
	putchar('\n');
	return (0);
}
