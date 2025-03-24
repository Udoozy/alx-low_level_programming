#include "main.h"
/**
 * str_concat - The function name
 * @s1: The string one
 * @s2: The string two
 * Return: Always char
 */
char *str_concat(char *s1, char *s2)
{
	int lents1 = 0, lents2 = 0, i, j;
	char *concat_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[lents1] != '\0')
		lents1++;

	while (s2[lents2] != '\0')
		lents2++;

	concat_str = malloc((lents1 + lents2 + 1) * sizeof(char));

	if (concat_str == NULL)
		return (NULL);
	for (i = 0; i < lents1; i++)
		concat_str[i] = s1[i];

	for (j = 0; j < lents2; j++, i++)
		concat_str[i] = s2[j];

	concat_str[i] = '\0';

	return (concat_str);
}
