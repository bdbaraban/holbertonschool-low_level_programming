/*
 * File: 5-string_toupper.c
 * Auth: Brennan D Baraban
 */

#include "holberton.h"

/**
 * string_toupper - Changes all lowercase letters
 *                  of a string to uppercase.
 * @str: The string to be changed.
 *
 * Return: A pointer to the changed string.
 */
char *string_toupper(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;

		str++;
	}

	return (str);
}
