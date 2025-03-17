#include "main.h"
/**
 * _palindrom - Function the check for palindrom
 * @s: The string to be checked
 * @right: Index from the right
 * @left: index from the left
 * Return: Always integer
 */
int _palindrom(char *s, int right, int left)
{
	if (right >= left)
		return (1);

	if (s[right] != s[left])
		return (0);

	return (_palindrom(s, right + 1, left - 1));
}

/**
 * is_palindrome - The function for the palindrome
 * @s: The sring provided
 * Return: Always an int
 */
int is_palindrome(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	if (len == 0)
		return (1);

	return (_palindrom(s, 0, len - 1));
}
