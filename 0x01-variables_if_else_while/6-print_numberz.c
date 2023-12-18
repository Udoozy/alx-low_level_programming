#include <stdio.h>
/**
 * main - Prints all single digit base 10 with puchar
 *
 * Return: Always return 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
	}
	putchar ('\n');
	return (0);
}
