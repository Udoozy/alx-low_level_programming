#include "main.h"
/**
 * _isupper - Check for upper case
 * @c: Character to print
 * Return: Return 1 if true and 0 if false
 */
int _isupper(int c)
{
	if (c >= 65  && c <= 90)
		return (1);
	else
		return (0);
}
