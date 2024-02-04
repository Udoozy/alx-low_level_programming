#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints all the argument passed
 * @argc: Argment param
 * @argv: Argument value param
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
