/*
 * File: 6-puts2.c
 * Auth: Brennan D Baraban
 */

#include "holberton.h"

/**
 * puts2 - Prints one char out of two of a string.
 * @str: The string containing characters.
 */
void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str += 2;
	}

	_putchar('\n');
}
