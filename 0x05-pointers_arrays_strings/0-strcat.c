/*
 * File: 0-strcat.c
 * Auth: Brennan D Baraban
 */

#include "holberton.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The string to be concatenated upon.
 * @src: The string to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int dest_indx = 0, src_indx = 0;
	int dest_len = 0, src_len = 0;

	while (dest[dest_indx++])
		dest_len++;

	while (src[src_indx++])
		src_len++;

	for (src_indx = 0; src_indx < src_len; src_indx++)
		dest[dest_len++] = src[src_indx];

	return (dest);
}
