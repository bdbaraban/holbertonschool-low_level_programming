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
 * Return: If the substring is located - a pointer to the beginning
 *                                       of the located substring.
 *         If the substring is not located - NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	int index, needle_len = 0;

	if (*needle == 0)
		return (haystack);

	for (index = 0; needle[index]; index++)
		needle_len++;

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			while (haystack[index] == needle[index])
			{
				if (index == needle_len - 1)
					return (haystack);

				index++;
			}
		}

		haystack++;
	}

	return ('\0');
}
