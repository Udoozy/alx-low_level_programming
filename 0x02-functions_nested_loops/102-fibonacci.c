#include <stdio.h>
#include <limits.h>
/**
 * main - Prints first 50 Fibonacci number from 1 and 2
 *
 * Return: Always return 0 success
 */
int main(void)
{
	unsigned long int n = 50;
	unsigned long int num1 = 1;
	unsigned long int  num2 = 2;
	unsigned long int nextnum;
	unsigned long int i;

	printf("%lu, %lu, ", num1, num2);

	for (i = 3; i <= n; i++)
	{
		nextnum = num1 + num2;
		printf("%lu", nextnum);

		if (i < n)
		{
			printf(", ");
		}
		num1 = num2;
		num2 = nextnum;
	}
	printf("\n");
	return (0);
}
