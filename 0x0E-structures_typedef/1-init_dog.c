#include "dog.h"
/**
 * init_dog - structure initializer
 * @d: pointer
 * @name: name of dog
 * @age: dog age
 * @owner: dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
