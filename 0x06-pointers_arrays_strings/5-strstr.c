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

	for (index = 0; needle[index]; index++)
		needle_len++;

	while (*haystack)
	{
		for (index = 0; index < needle_len; index++)
		{
			if (haystack[index] != needle[index])
				break;

			if (indx2 == needle_len - 1)
				return (haystack);
		}

		haystack++;
	}

	return ('\0');
}
