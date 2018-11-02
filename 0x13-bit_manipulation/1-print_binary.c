/*
 * File: 1-print_binary.c
 * Auth: Brennan D Baraban
 */

#include "holberton.h"
#include <stdio.h>
/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	if ((n >> 1) > 0)
		print_binary(n >> 1);

	if ((n & 1) == 0)
		_putchar('0');

	else
		_putchar('1');
}
