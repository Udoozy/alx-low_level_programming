#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Prints the last digit of random num
 *Return: Always return 0
 */
int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;

	if (m > 5)
		printf("The last digit of %d is %d and is greater than 5\n", n, m);
	if (m == 0)
		printf("The last digit of %d is %d and is 0\n", n, m);
	if (m < 6 && m != 0)
		printf("The last digit of %d is %d and is less than 6 and not 0\n", n, m);

	return (0);
}
