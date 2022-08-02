#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - a function that free dogs
 * @d: dog to be freed
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
