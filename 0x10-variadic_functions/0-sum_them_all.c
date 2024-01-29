#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - fuction that returns the sum of all its parameter
 * @n: An argument
 * Return: Return 0 if n == 0 and sum otherwise
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list my_arg;
	unsigned int i;
	int sum = 0;

	va_start(my_arg, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(my_arg, int);
	}
	va_end(my_arg);
	return (sum);

}
