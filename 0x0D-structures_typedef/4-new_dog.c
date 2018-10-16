/*
 * File: 4-new_dog.c
 * Auth: Brennan D Baraban
 */

#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

int find_len(char *str);
dog_t *new_dog(char *name, float age, char *owner);

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
	char *name_cpy, *owner_cpy;
	int index, name_len, owner_len;

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	name_len = find_len(name);
	owner_len = find_len(owner);

	name_cpy = malloc(sizeof(char) * (name_len + 1));
	if (name_cpy == NULL)
	{
		free(doggo);
		return (NULL);
	}

	for (index = 0; index < name_len; index++)
		name_cpy[index] = name[index];
	name_cpy[index] = '\0';

	owner_cpy = malloc(sizeof(char) * (owner_len + 1));
	if (owner_cpy == NULL)
	{
		free(name_cpy);
		free(doggo);
		return (NULL);
	}

	doggo->name = name;
	doggo->age = age;
	doggo->owner = owner;

	free(name_cpy);
	free(owner_cpy);

	return (doggo);
}
