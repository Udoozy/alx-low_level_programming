#include "main.h"
/**
 * _check_prime - Function that checks prime
 * @n: The number the y is compared with
 * @y: The number that is operated to cmp n
 * Return: Always an Integer
 */
int _check_prime(int n, int y)
{
	if (y * y > n)
		return (1);

	if (n % y == 0)
		return (0);
	return (_check_prime(n, y + 1));
}

/**
 * is_prime_number - The function to check is prime
 * @n: The number to check if is prime
 * Return: Always an integer
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (_check_prime(n, 2));
}
