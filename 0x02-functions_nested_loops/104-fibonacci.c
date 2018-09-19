/*
 * File: 104-fibonacci.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *        1 and 2, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count = 2;

	long double fib1 = 1, fib2 = 2, sum;

	printf("1, 2, ");

	while (count < 98)
	{
		sum = fib1 + fib2;
		printf("%.0Lf", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 97)
			printf("\n");
		else
			printf(", ");
		count++;
	}

	return (0);
}
