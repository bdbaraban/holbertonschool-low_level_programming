/*
 * File: 9-times_table.c
 * Auth: Brennan D Baraban
 */

#include "holberton.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (mult = 1; mult <= 9; mult++)
		{
			prod = num * mult;

			if (prod <= 9)
				_putchar(' ');

			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');

			if (mult == 9)
				continue;

			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
