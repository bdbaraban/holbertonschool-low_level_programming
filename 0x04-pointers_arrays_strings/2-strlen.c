/*
 * File: 2-strlen.c
 * Auth: Brennan D Baraban
 */

#include "holberton.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string.
 *
 * Return: The length of the the string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}
