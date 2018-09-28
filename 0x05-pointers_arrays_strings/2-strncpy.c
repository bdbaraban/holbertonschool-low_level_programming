/*
 * File: 2-strncpy.c
 * Auth: Brennan D Baraban
 */

#include "holberton.h"

/**
 * _strncpy - Copies at most an inputted number of bytes
 *            from string src into dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	if (src_len > n)
	{
		for (index = 0; index < n; index++)
			dest[index] = src[index];
	}

	else
	{
		for (index = 0; index < src_len; index++)
			dest[index] = src[index];

		for (index = src_len; index < n; index++)
			dest[index] = '\0';
	}

	return (dest);
}
