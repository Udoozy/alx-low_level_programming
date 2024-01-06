#include <stdio.h>
/**
 * main - Prints prime factors
 *
 * Return: Always return 0 success
 */
int main(void)
{
	long long  n = 612852475143;
	long long i;

	for (i = 2; i <= n; i++)
	{
		while (n % i == 0)
		{
			n = n / i;
		}
	}
	printf("%lld\n", i - 1);
	return (0);
}
