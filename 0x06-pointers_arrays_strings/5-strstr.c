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
	int indx1 = 0, indx2;
	int needle_len = 0;

	for (indx2 = 0; *(needle + indx2); indx2++)
		needle_len++;

	while (*(haystack + indx1))
	{
		for (indx2 = 0; indx2 < needle_len; indx2++)
		{
			if (*(haystack + indx1 + indx2) != *(needle + indx2))
				break;

			if (indx2 == needle_len - 1)
				return (haystack + indx1);
		}

		indx1++;
	}

	return ('\0');
}
