/*
 * File: 100-realloc.c
 * Auth: Brennan D Baraban
 */

#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated.
 * @old_size: The size in bytes of the allocated space for ptr.
 * @new_size: The size in bytes for the new memory block.
 * 
 * Return: If new_size == old_size - ptr.
 *         If new_size == 0 and ptr is not NULL - NULL.
 *         Otherwise - a pointer to the reallocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *ptr_copy, *filler;
	unsigned int index = 0;

	if (new_size == 0 && ptr != NULL)
		return (NULL);

	if (new_size == old_size)
		return (ptr);

	mem = malloc(sizeof(*ptr_copy) * new_size);

	if (mem == NULL)
		return (NULL);

	ptr_copy = ptr;
	filler = mem;

	while (*ptr_copy)
		filler[index++] = *ptr_copy++;

	free(ptr);

	return (mem);
}
