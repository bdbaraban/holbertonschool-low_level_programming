/*
 * File: 2-calloc.c
 * Auth: Brennan D Baraban
 */

#include "holberton.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array of a certain number of elements
 *           each of an inputted byte size. All elements are initialized to 0.
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 *
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 *         Otherwise - a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	mem = memset(mem, 0, nmemb);

	return (mem);
}
