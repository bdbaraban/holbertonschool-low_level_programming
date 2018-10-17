/*
 * File: 0-print_name.c
 * Auth: Brennan D Baraban
 */

#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name: The name to be printed.
 * @f: A pointer to a function that prints a name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
