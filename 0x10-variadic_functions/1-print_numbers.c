#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Print all numbers passed as argument
 * @separator: The string to be printed
 * @n: Number of an argument
 * Return: Always 0 for success and NULL for empty string
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		int x = va_arg(nums, int);

		printf("%d", x);
		if (i != n - 1 && *separator != '\0')
		{
			printf("%c", *separator);
		}
	}
	va_end(nums);

	printf("\n");
}
