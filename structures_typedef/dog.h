#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure describing a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Prototype for init_dog */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* Prototype for print_dog */
void print_dog(struct dog *d);

#endif /* DOG_H */

