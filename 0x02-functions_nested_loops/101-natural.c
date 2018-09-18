/*
 * File: 101-natural.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - Lists all the natural numbers below 1024 (excluded)
 *        that are multiples of 3 or 5.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0, sum = 0;

	while (sum < 1024)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
		i++;
	}
	
	printf("%d\n", sum);

	return (0);
}
