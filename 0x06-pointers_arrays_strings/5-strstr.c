/*
 * File: 5-strstr.c
 * Auth: Brennan D Baraban
 */

#include "holberton.h"

/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 *
 * Return: If the substring is found - a pointer to the beginning
 *                                     of the located substring.
 *         If the substring is not found - NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int index, needle_len = 0;
	char *hay_cpy, *needle_cpy;

	hay_cpy = haystack;
	needle_cpy = needle;

	for (index = 0; needle_cpy[index]; index++)
		needle_len++;

	while (*hay_cpy)
	{
		for (index = 0; index < needle_len; index++)
		{
			if (hay_cpy[index] != needle_cpy[index])
				break;

			if (index == needle_len - 1)
				return (hay_cpy);
		}

		hay_cpy++;
	}

	return ('\0');
}
