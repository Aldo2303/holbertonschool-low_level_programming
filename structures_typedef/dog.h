#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - Define a new type struct dog
 * @name: the variable
 * @owner: the variable
 * @age: the variable
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

