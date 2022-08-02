#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * new_dog - a function that creates and initialize a struct
 * @name: the name to give the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: a pointer to a truct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	doggy = malloc(sizeof(dog_t));

	if (doggy == NULL)
		return (NULL);

	doggy->name = name;
	doggy->age = age;
	doggy->owner = owner;

	return (doggy);
}
