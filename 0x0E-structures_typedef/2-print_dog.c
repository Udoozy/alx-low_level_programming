#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Prints the details of a dog
 * @d: Pointer to the struct dog to print
 *
 * Description: This function prints the details of a dog, including its
 * name, age, and owner. If any of these fields are NULL, it prints "(nil)"
 * instead.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
