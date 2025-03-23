#include <stdio.h>
#include <stdlib.h>
/**
 * main - The main function
 * @argc: The Argument counter
 * @argv: The argument vector
 * Return: Always an integer
 */
int main(int argc, char *argv[])
{
	int i;
	int cent, coins = 0;
	int denomination[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);

	if (cent < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		while (cent >= denomination[i])
		{
			cent -= denomination[i];
			coins++;
		}
	}
	printf("%d\n", coins);
	return (0);
}
