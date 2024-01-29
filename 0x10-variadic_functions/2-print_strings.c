#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Print strings passed as an argument
 * @separator: String pointer
 * @n: Number of argument
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list d_string;
	unsigned int i;
	char *str_ptr;

	va_start(d_string, n);
	for (i = 0; i < n; i++)
	{
		str_ptr = va_arg(d_string, char *);
		if (str_ptr == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", str_ptr);
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(d_string);
	printf("\n");
}
