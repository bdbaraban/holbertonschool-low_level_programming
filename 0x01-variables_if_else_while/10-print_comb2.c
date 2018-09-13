/*
 * File: 10-print_comb2.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - Prints the numbers from 00 to 99, numbers separated by
 *        , followed by a space, in ascending order.
 *
 * Return: 0 if successful, non-zero otherwise.
 */
int main(void)
{
	int digit1 = 0;
	int digit2;

	while (digit1 < 10)
	{
		for (digit2 = 0; digit2 < 10; digit2++)
		{
			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');

			if (digit1 == 9 && digit2 == 9)
			{
				break;
			}
			else
			{
				putchar(44);
				putchar(32);
			}
		}
		digit1++;
	}
	putchar('\n');

	return (0);
}
