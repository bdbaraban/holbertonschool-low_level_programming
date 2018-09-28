/*
 * File: 1-strncat.c
 * Auth: Brennan D Baraban
 */

#include "holberton.h"

/**
 * _strncat - Concatenates two strings using at most
 *            an inputted number of bytes from src.
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_indx = 0, src_indx = 0;
	int dest_len = 0, src_len = 0;

	while (dest[dest_indx++])
		dest_len++;

	while (src[src_indx++])
		src_len++;

	if (src_len > n)
	{
		for (src_indx = 0; src_indx < n; src_indx++)
			dest[dest_len++] = src[src_indx];
	}

	else
	{
		for (src_indx = 0; src_indx < src_len; src_indx++)
			dest[dest_len++] = src[src_indx];
	}

	return (dest);
}
