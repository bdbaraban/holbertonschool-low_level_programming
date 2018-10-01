/*
 * File: 102-infinite_add.c
 * Auth: Brennan D Baraban
 */

#include "holberton.h"

/**
 * add_strings - Adds the numbers stored in two strings.
 * @big: The larger number.
 * @small: The smaller number.
 * @r: The buffer to store the result.
 * @big_len: The length of big.
 * @small_len: The length of small.
 * @size_r: The buffer size.
 *
 * Return: If r can store the sum - a pointer to the result.
 *         If r cannot store the sum - 0.
 */
char *add_strings(char *big, char *small, char *r,
		  int big_len, int small_len, int size_r)
{
	int r_len = big_len;
	int index, num, tens = 0;

	while (small_len > 0)
	{
		num = big[big_len - 1] - '0' + small[small_len-- - 1] - '0';
		num += tens;
		r[big_len-- - 1] = (num % 10) + '0';
		tens = num / 10;
	}

	while (big_len > 0)
	{
		num = (big[big_len - 1] - '0') + tens;
		r[big_len-- - 1] = (num % 10) + '0';
		tens = num / 10;
	}

	if (tens && (r_len + 1 < size_r))
	{
		for (index = r_len; index >= 0; index--)
			r[index] = r[index - 1];
		r[0] = (tens % 10) + '0';
		r[r_len + 1] = '\0';
	}

	else if (tens && (r_len + 1 >= size_r))
		return (0);

	else
		r[r_len] = '\0';

	return (r);
}

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number to be added.
 * @n2: The second number to be added.
 * @r: The buffer to store the result.
 * @size_r: The buffer size.
 *
 * Return: If r can store the sum - a pointer to the result.
 *         If r cannot store the sum - 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int index, n1_len = 0, n2_len = 0;

	for (index = 0; n1[index]; index++)
		n1_len++;

	for (index = 0; n2[index]; index++)
		n2_len++;

	if (size_r <= n1_len + 1 || size_r <= n2_len + 1)
		return (0);

	if (n1_len >= n2_len)
		return (add_strings(n1, n2, r, n1_len, n2_len, size_r));

	else
		return (add_strings(n2, n1, r, n2_len, n1_len, size_r));
}
