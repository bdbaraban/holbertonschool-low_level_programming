/*
 * File: 9-strcpy.c
 * Auth: Brennan D Baraban
 */

#include "holberton.h"

/**
 * _strcpy - Copies a string pointed to by src, including the
 *           terminating null byte, to a buffer pointed to by dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0, len = 0;

	while (src[index++])
		len++;

	for (index = 0; index <= len; index++)
		dest[index] = src[index];

	return (dest);
}
