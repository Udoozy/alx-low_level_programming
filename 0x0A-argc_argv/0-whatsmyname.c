#include<stdio.h>
#include <stdlib.h>
/**
 * main - Prints name of a file
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (i == 0)
	{
		for (i = 0; i < argc; i++)
			printf("%s", argv[i]);
	}
	return (0);

}
