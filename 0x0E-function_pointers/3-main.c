/*
 * File: 3-main.c
 * Auth: Brennan D Baraban
 */

#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *op;

	num1 = atoi(argv[1]);
	if (num1 == 0 && *(argv[1]) != 0)
	{
		printf("Error\n");
		return (0);
	}

	op = argv[2];

	num2 = atoi(argv[3]);
	if (num2 == 0 && argv[3] != 0)
	{
		printf("Error\n");
		return (0);
	}

	if (get_op_func(op) == NULL)
	{
		printf("Error\n");
		return (0);
	}

	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}
