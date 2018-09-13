/*
 * File: 101-quote.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - Prints "and that piece of art is useful" - Dora Korpar, 2015-10-19",
 *                followed by a new line, to standard error.
 *
 * Return: 1 if successful.
 */
int main(void)
{
	fprintf(stderr, "%s", "and that piece of art is useful\" - "
		"Dora Korpar, 2015-10-19\n");

	return (1);
}
