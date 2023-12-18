#include <stdio.h>
/**
 * main - Prints alphabet in lowercase
 *
 * Return: Always return 0
 */
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
		putchar(x);
	putchar('\n');
	return (0);
}
