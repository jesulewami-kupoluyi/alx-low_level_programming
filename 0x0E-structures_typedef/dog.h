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
typedef struct dog dog_t;
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
