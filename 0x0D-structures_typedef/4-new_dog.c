/*
 * File: 4-new_dog.c
 * Auth: Brennan D Baraban
 */

#include "dog.h"
#include <stdlib.h>

/**
 * find_len - Finds the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */
int find_len(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

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
	dog_t *doggo;
	int index, name_len, owner_len;

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	name_len = find_len(name);
	owner_len = find_len(owner);

	doggo->name = malloc(sizeof(char) * (name_len + 1));
	if (doggo->name == NULL)
		return (NULL);
	
	doggo->owner = malloc(sizeof(char) * (owner_len + 1));
	if (doggo->owner == NULL)
		return (NULL);

	for (index = 0; name[index]; index++)
		doggo->name[index] = name[index];
	doggo->name[index] = '\0';

	doggo->age = age;

	for (index = 0; owner[index]; index++)
		doggo->owner[index] = owner[index];
	doggo->owner[index] = '\0';

	return (doggo);
}
