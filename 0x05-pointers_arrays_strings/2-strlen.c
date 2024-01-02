#include "main.h"
#include <string.h>
/**
 * _strlen - Print string length of a string
 * @s: Parameter
 * Return: Always 0
 */
int _strlen(char *s)
{
	int lent = 0;

	while (*s != '\0')
	{
		lent++;
		s++;
	}
	return (lent);
}
