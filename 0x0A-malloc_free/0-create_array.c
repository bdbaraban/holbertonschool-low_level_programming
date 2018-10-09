/*
 * File: 0-create_array.c
 * Auth: Brennan D Baraban
 */

#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and initializes
 *                it with a specific char.
 * @size: The size of the array to be initialized.
 * @c: The specific char to intialize the array with.
 *
 * Return: If size = 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int index;
	char *array = malloc(size);

	for (index = 0; index < size; index++)
		array[index] = c;

	if (size == 0 || array == NULL)
		return (NULL);

	return (array);
}
