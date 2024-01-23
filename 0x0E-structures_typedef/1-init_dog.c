#ifndef DOG_H
#define DOG_H
/**
 * init_dog - Function name
 * @d: A variable ponter
 * @name: Dogs name
 * @age: Dogs Age
 * @owner: Dogs Owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
#endif
