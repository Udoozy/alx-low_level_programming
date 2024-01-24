#include "function_pointers.h"
/**
 * print_name - Prints a name
 * @name: A Name argument
 * @f: Function pointer
 * Return: Always 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
