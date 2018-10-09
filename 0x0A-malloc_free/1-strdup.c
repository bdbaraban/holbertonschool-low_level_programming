/*
 * File: 1-strdup.c
 * Auth: Brennan D Baraban
 */

#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str = NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	int index, len = 0;
	char *duplicate;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	duplicate = malloc(len);

	if (duplicate == NULL)
		return (NULL);

	for (index = 0; index < len; index++)
		duplicate[index] = str[index];

	duplicate[len] = '\0';

	return (duplicate);
}
