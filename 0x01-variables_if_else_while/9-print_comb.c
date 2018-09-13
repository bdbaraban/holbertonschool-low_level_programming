/*
 * File: 9-print_comb.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 */
int main(void)
{
	int num = 0;

	while (1)
	{
		putchar((num % 10) + '0');
		if (num == 9)
		{
			break;
		}
		else
		{
			putchar(44);
			putchar(32);
		}
		num++;
	}
	putchar('\n');

	return (0);
}
