#include "main.h"
/**
 * check_func - The function that for square root
 * @n: The number that i * i should result
 * @i: The number that is multiplied to check for n
 * Return: Always an integer
 */
int check_func(int n, int i)
{
	if (i * i == n)
		return (i);

	if (i * i > n)
		return (-1);

	return (check_func(n, i + 1));
}

/**
 * _sqrt_recursion - The sqrt function
 * @n: The number to find it square root
 * Return: Always an integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (check_func(n, 1));
}
