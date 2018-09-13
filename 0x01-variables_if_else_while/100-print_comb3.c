/*
 * File: 100-print_comb3.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: 0 if successful, non-zero otherwise.
 */
int main(void)
{
	int digit1 = 0;
	int digit2;

	while (digit1 < 9)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');

			if (digit1 == 8 && digit2 == 9)
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
