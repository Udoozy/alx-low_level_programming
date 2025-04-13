#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: Pointer to the new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int name_len = 0, owner_len = 0;

	while (name[name_len])
		name_len++;
	while (owner[owner_len])
		owner_len++;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(name_len + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(owner_len + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (int i = 0; i < name_len; i++)
		dog->name[i] = name[i];
	dog->name[name_len] = '\0';

	for (int i = 0; i < owner_len; i++)
		dog->owner[i] = owner[i];
	dog->owner[owner_len] = '\0';

	dog->age = age;

	return (dog);
}
