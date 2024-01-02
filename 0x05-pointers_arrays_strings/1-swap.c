#inlcude "main.h"
/**
 * swap_int - Swap values of two integers
 * @a: Parameter 1
 * @b: parameter 2
 * Return: Always void
 */
void swap_int(int *a, int *b)
{
	int my_int = *a;

	*a = *b;
	*b = my_int;
}
