/*
 * File: 4-new_dog.c
 * Auth: Brennan D Baraban
 */

#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: The new struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t doggo;
	dog_t *me_doggo = &doggo;
	int index;

	for (index = 0; name[index]; index++)
		;

	doggo.name = malloc(sizeof(char) * index);
	if (doggo.name == NULL)
		return (NULL);

	for (index = 0; name[index]; index++)
		doggo.name[index] = name[index];
	doggo.name[index] = '\0';

	doggo.age = age;

	for (index = 0; owner[index]; index++)
		;

	doggo.owner = malloc(sizeof(char) * index);
	if (doggo.owner == NULL)
		return (NULL);

	for (index = 0; owner[index]; index++)
		doggo.owner[index] = owner[index];
	doggo.owner[index] = '\0';

	return (me_doggo);
}
