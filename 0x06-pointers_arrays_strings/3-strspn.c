/*
 * File: 3-strspn.c
 * Auth: Brennan D Baraban
 */

#include "holberton.h"

/**
 * _strspn - Gets the length of a prefix of a string.
 * @s: The string to be searched.
 * @accept: The prefix to be measured.
 *
 * Return: The number of bytes in s which consist
 *         only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index = 0;

	while ((*s >= 'a' && *s <= 'z') ||
	       (*s >= 'A' && *s <= 'Z'))
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				bytes++;
		}

		s++;
	}

	return (bytes);
}
