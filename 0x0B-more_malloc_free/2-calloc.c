/*
 * File: 2-calloc.c
 * Auth: Brennan D Baraban
 */

#include "holberton.h"
#include <stdlib.h>

/**
 * _memset - Fills a space in memory with an inputted char.
 * @mem: - The space in memory.
 * @c: The char to initialize mem with.
 * @size: The size of mem.
 *
 * Return: A pointer to the filled space in memory.
 */
void *_memset(void *mem, char c, int size)
{
	char *filler = mem;
	int index;

	for (index = 0; index < size; index++)
		filler[index] = c;

	return (mem);
}

/**
 * _calloc - Allocates memory for an array of a certain number
 *           of elements each of an inputted byte size.
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

	return (_memset(mem, '\0', size * nmemb));
}
