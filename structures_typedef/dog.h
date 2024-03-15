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

#endif
