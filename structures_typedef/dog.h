#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - a structure representing a dog
 * @name: pointer to a character string representing the name of the dog
 * @age: age of the dog
 * @owner: pointer to a character string representing the owner of the dog
 *
 * Description: This structure represents a dog with its name, age, and owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
