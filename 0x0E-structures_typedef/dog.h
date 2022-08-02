#ifndef DOG_H
#define DOG_H

/**
 * struct dog - the dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *, char *, float, char *);

#endif /* DOG_H */
