#include "main.h"
/**
 * _atoi - The atoi function
 * @s: The string to convert
 * Return: Always int
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int n = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
			break;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		n = n * 10 + (s[i] - '0');
		i++;
	}
	return (n * sign);
}
