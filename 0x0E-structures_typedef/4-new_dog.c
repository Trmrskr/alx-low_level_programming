#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

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
	int n_len = 0, own_len = 0;

	if (name != NULL && owner != NULL && age != 0)
	{
		n_len = strlen(name) + 1;
		own_len = strlen(owner) + 1;

		doggy = malloc(sizeof(dog_t));

		if (doggy == NULL)
			return (NULL);

		doggy->name = malloc(n_len * sizeof(char));

		if (doggy->name == NULL)
		{
			free(doggy);
			return (NULL);
		}

		doggy->owner = malloc(own_len * sizeof(char));

		if (doggy->owner == NULL)
		{
			free(doggy->name);
			free(doggy);
			return (NULL);
		}

		doggy->name = strcpy(doggy->name, name);
		doggy->owner = strcpy(doggy->owner, owner);
		doggy->age = age;
	}

	return (doggy);
}
