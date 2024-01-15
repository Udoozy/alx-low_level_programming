#include "main.h"
/**
 * rev_string - Reverse a string
 * @s: An argument
 * Return: Always 0
 */
void rev_string(char *s)
{
	int l = s[0];
	int count = 0;
	int m;

	while (s[count] != '\0')
	{
		count++;
	}
	for (m = 0; m < count; m++)
	{
		count--;
		l = s[m];
		s[m] = s[count];
		s[count] = l;
	}
}
