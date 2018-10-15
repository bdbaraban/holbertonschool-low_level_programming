/*
 * File: 4-new_dog.c
 * Auth: Brennan D Baraban
 */

#include "dog.h"
#include <stdio.h>

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

	if (me_doggo == NULL)
		return (NULL);

	doggo.name = name;
	doggo.age = age;
	doggo.owner = owner;

	return (me_doggo);
}
