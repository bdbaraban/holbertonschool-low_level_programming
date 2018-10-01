/*
 * File: 4-strpbrk.c
 * Auth: Brennan D Baraban
 */

#include "holberton.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The set of bytes to be searched for.
 *
 * Return: If a set is matched - a pointer to the byte s that matches.
 *         If no set is matched - NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int index = 0;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return (s);
}
