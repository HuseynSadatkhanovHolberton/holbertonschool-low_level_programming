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

/* typedef for struct dog */
typedef struct dog dog_t;

/* Prototype for init_dog */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* Prototype for print_dog */
void print_dog(struct dog *d);

/* Prototype for new_dog */
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */

