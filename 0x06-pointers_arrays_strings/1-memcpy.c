/*
 * File: 1-memcpy.c
 * Auth: Brennan D Baraban
 */

#include "holberton.h"

/**
 * _memcpy - Copies n bytes from memory area src to memory area dest.
 * @dest: The memory area to be copied to.
 * @src: The memory area to be copied from.
 * @n: The number of bytes to be copied.
 *
 * Return: A pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		dest[index] = src[index];

	return (dest);
}
