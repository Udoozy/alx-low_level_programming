#include <stdio.h>
/**
 * main - Print the first 50 fibonacci numbers fform 1 and 2
 *
 * Return: Always 0 success
 */
int main(void)
{
	int i;
	unsigned long int n = 50;
	unsigned long int num_1 = 1, num_2 = 2, nextnum;

	printf("%d, %d, ", num_1, num_2);

	for (i = 3; i <= n; i++)
	{
		nextnum = num_1 + num_2;
		printf("%d", nextnum);
		if (i != n)
		{
			printf(",");
		}
		num_1 = num_2;
		num_2 = nextnum;
	}
	printf("\n");
	return (0);
}
