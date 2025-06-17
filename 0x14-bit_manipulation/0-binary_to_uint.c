#include <stdio.h>
#include <string.h>
/**
 * binary_to_uint - Function  for converting binary to decimal
 * @b: The binary string to be converted
 * Return: Always return the converted binary
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int lent;
	int i;

    if (b == NULL)
    {
        return (0);
    }

	lent = strlen(b);

	for (i = 0; i < lent; i++)
	{
		if (b[i] == '1')
		{
			decimal = decimal + (1 << (lent - 1 - i));
		}
		else if (b[i] != '0')
		{
			return (0);
		}
	}

	return (decimal);
}
