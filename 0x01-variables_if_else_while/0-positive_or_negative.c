#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Assign and print a random numbers
 * Return: Always 0 sucess
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negetive\n", n);
	else if (n > 0)
		printf("%d is postive\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
