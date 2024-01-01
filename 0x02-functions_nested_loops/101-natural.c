#include <stdio.h>
/**
 * main - Prints multiples of 3 and 5 less that 1024
 *
 * Return: Always return 0
 */
int main(void)
{
	int sum = 0;
	int i;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}

	}
	printf("%d ", sum);
	printf("\n");
	return (0);
}
