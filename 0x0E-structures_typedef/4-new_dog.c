#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner's name
 *
 * Return: A pointer to the newly created dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	unsigned int i, j;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		;
	i++;
	dog->name = (char *)malloc(sizeof(char) * i);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (j = 0; j < i; j++)
		dog->name[j] = name[j];
	dog->age = age;
	for (i = 0; owner[i] != '\0'; i++)
		;
	i++;
	dog->owner = (char *)malloc(sizeof(char) * i);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (j = 0; j < i; j++)
		dog->owner[j] = owner[j];
	return (dog);
}

