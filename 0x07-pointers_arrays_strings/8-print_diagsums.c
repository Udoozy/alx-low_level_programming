#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - The user defined function
 * @a: Pointer to the array
 * @size: The size of the array
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
