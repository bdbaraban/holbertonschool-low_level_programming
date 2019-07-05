/*
 * File: 0-memset.c
 * Auth: Brennan D Baraban
 */

#include "holberton.h"

/**
 * memset - Fills the first n bytes of the memory area
 *          pointed to by @s with the constant byte @c.
 * @s: A pointer to the memory area to be filled.
 * @c: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the filled memory area @s.
 */
void *memset(void *s, int c, size_t n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		s[index] = c;

	return (s);
}
