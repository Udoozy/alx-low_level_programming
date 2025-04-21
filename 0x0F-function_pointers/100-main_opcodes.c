#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i, bytes;
	unsigned char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = (unsigned char *)main;

	for (i = 0; i < bytes; i++)
	{
		printf("%02x", ptr[i]);
		if (i < bytes - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
