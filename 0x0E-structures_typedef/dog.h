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
void print_dog(struct dog *);

typedef struct dog dog_t;

dog_t *new_dog(char *, float, char *);
void free_dog(dog_t *d);

#endif /* DOG_H */
