#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a new type struct dog.
 * @name: character value.
 * @age: float value.
 * @owner: character value.
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
