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
	int index = 0, str_len = 0;
	char *duplicate;

	if (str == NULL)
		return (NULL);

	while (str[index++])
		str_len++;

	duplicate = malloc(str_len);

	if (duplicate == NULL)
		return (NULL);

	for (index = 0; index < str_len; index++)
		duplicate[index] = str[index];

	return (duplicate);
}
