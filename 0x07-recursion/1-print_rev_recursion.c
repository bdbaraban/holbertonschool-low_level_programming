/*
 * File: 1-print_rev_recursion.c
 * Auth: Brennan D Baraban
 */

#include "holberton.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
