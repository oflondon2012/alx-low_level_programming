#include "dog.h"
#include <stdio.h>

/**
 * init_dog - function that initialize a variable of type struct dog
 *
 * @d: represent pointer
 * @name: variable name of dog
 * @age: diff age of each given dog
 * @owner: var for owner information
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	(*d).name = name;
	d->age = age;
	d->owner = owner;
}
