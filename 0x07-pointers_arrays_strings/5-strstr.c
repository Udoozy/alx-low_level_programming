#include "main.h"
/**
 * _strstr - The funtion that sreached substring
 * @haystack: The array that is searched
 * @needle: The array that holds the substring
 * Return: Always a pointer to d begnn where a match is found
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*h && *n && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);

}
