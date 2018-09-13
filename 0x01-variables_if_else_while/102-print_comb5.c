/*
 * File: 102-print_comb5.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers,
 *        ranging from 0-99, separated by a comma followed by a space.
 *
 * Return: 0 if successful, non-zero otherwise.
 */
int main(void)
{
	int digit1 = 0, digit2, digit3, digit4;

	while (digit1 < 10)
	{
		for (digit2 = 0; digit2 < 10; digit2++)
		{
			for (digit3 = digit1; digit3 < 10; digit3++)
			{
				for (digit4 = 0; digit4 < 10; digit4++)
				{
					if (digit3 == digit1 &&
					    digit4 <= digit2)
					{
						continue;
					}
					else
					{
						putchar((digit1 % 10) + '0');
						putchar((digit2 % 10) + '0');
						putchar(32);
						putchar((digit3 % 10) + '0');
						putchar((digit4 % 10) + '0');
					}
					if (digit1 == 9 && digit2 == 8 &&
					    digit3 == 9 && digit4 == 9)
					{
						break;
					}
					else
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
		digit1++;
	}
	putchar('\n');
	return (0);
}
