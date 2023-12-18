#include <stdio.h>
/**
 * main - Prints all combination of 2digit
 *
 * Return: Always return 0
 */
int main(void)
{
	int x, y;

	for (x = 0; x <= 8; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if (x < y)
			{
				putchar(x + '0');
				putchar(y + '0');
			}
			if (x < y && x != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
