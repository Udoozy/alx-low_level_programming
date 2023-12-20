#include "main.h"
/**
 * _islower - Check for lower case
 * @c: It is an augument
 * Return: Always return
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}		
