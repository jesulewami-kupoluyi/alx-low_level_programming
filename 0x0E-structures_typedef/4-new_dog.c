#include<stdlib.h>
#include"dog.h"
/**
 * _string -prints values
 * @newval: value in character
 * Return:0 if true
 */
char *_string(char *newval)
{
	char ptr;
	int i;
	int len = 0;

	if (newval == NULL)
	{
		return (NULL);
	}
	while (newval[len] != \o)
	{
		lent++;
	}
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; point[i] != '\0'; i++)
	{
		ptr[i] = newval[i];
	}
	ptr[i] = '\0';
	return (ptr);
}
/**
 * new_dog - Funcion to create a new dog
 * @name: initial name of dog
 * @age: initial dog age
 * @owner: initial dog owner
 * Return: Always 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *dog_name, *dog_owner;
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog_name = _string(name);
	if (dog_name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = dog_name;

	dog->age = age;

	dog_owner = _string(owner);
	if (dog_owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->owner = dog_owner;
	return (dog);
}
