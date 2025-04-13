#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog struct name
 * @name: Dogs name
 * @age: Dogs aage
 * @owner: Dogs owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;
/**
 * dog_t - typedef for struct dog
 *
 * Description: This typedef creates an alias for the struct dog type,
 * allowing us to use dog_t as a shorthand for struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG_H */
