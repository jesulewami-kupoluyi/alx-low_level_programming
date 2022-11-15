#include<stdio.h>
#include"dog.h"
/**
 * init_dog -initializes a function call.
 * @d: a pointer to a structure
 * @name: character
 * @age: float
 * @owner: character
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
