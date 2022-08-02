#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dog - print the details of a dog
 * @d: dog passed into function
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", (*d).name);

		if (d->age <= 0.0)
			printf("Age: %f\n", 0);
		else
			printf("Age: %f\n", (*d).age);

		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", (*d).owner);

	}
}
