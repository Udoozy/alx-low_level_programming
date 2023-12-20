#include "main.h"
/**
 * _isalpha - Check for lower case
 * @c: It is an augument
 * Return: Always return
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
