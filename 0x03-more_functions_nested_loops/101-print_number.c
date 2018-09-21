/*
 * File: 101-print_number.c
 * Auth: Brennan D Baraban
 */

#include "holberton.h"

/**
 * shift - Prints an integer one digit at a time.
 * @num: The integer to be printed.
 */
void shift(int num)
{
	if ((num / 10) > 0)
		shift(num / 10);

	_putchar((num % 10) + '0');
}

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	shift(n);
}
