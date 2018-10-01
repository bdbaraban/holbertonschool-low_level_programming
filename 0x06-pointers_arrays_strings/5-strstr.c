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
	int index;

	while (*haystack)
	{
		for (index = 0; needle[index]; index++)
		{
			if (haystack[index] != needle[index])
				break;

			if (needle[index + 1] == 0)
				return (haystack);
		}

		haystack++;
	}

	return ('\0');
}
