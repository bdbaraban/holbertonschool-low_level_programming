/*
 * File: 3-array_range.c
 * Auth: Brennan D Baraban
 */

#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers ordered
 *               from min to max, inclusive.
 * @min: The first value of the array.
 * @max: The last value of the array.
 *
 * Return: If min > max or the function fails - NULL.
 *         Otherwise - a pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *array, index;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max + 1));

	if (array == NULL)
		return (NULL);

	for (index = 0; index <= max; index++)
		array[index] = min++;

	return (array);
}
