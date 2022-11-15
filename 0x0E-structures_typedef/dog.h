#ifndef MAIN_H
#define MAIN_H
/**
 * struct dog -structure of a set of  values.
 * @name: character value
 * @age: float value
 * @owner: character value
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
