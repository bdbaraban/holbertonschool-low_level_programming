/*
 * File: 100-prime_factor.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - Find and prints the largest prime factor of the number 612852475143.
 *
 * Return: Always 0.
 */
int main(void)
{
	long prime = 612852475143, divisor;

	while (divisor < prime)
	{
		for (divisor = 2; divisor < prime; divisor++)
		{
			if ((prime % divisor) == 0)
			{
				prime /= divisor;
				break;
			}
		}
	}

	printf("%ld\n", prime);

	return (0);
}
