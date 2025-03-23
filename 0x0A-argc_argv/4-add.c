#include <stdio.h>
#include <stdlib.h>
/**
 * main - The main program
 * @argc: The argument counter
 * @argv: The argument linear vector
 * Return: Always an int
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
        return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if ((*argv[i] >= 'a' && *argv[i] <= 'z') ||
				(*argv[i] >= 'A' && *argv[i] <= 'Z'))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
