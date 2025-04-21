#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_all("ceis", 'B', 3, "stSchool");
    print_all("ceis", 'B', 3, NULL);
    print_all("ceis", 'B', 3, "stSchool", 3.14);
    print_all("ceis", 'B', 3, "stSchool", 3.14, 42);
    print_all("ceis", 'B', 3, "stSchool", 3.14, 42, "Hello");
    print_all("ceis", 'B', 3, "stSchool", 3.14, 42, "Hello", 3.14);
    print_all("ceis", 'B', 3, "stSchool", 3.14, 42, "Hello", 3.14, 42);
    print_all("ceis", 'B', 3, "stSchool", 3.14, 42, "Hello", 3.14, 42, "World");
    print_all("cifs", 'H', 10, 3.14, "hello");

    return (0);
}