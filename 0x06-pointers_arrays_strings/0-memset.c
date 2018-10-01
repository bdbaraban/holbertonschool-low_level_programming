/*
 * File: 0-memset.c
 * Auth: Brennan D Baraban
 */

#include "holberton.h"

/**
 * _memset - Fills the first n bytes of the memory area
 *           pointed to by s with the constant byte b.
 * @s: The memory area to be filled.
 * @b: The character to fill the memory area.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the filled memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		s[index] = b;

	return (s);
}
