#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure that create dog information
 *
 * @name: name of diff dog
 * @age: variable for age
 * @owner: owner info
 *
 * Desc: learning to write structure
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
