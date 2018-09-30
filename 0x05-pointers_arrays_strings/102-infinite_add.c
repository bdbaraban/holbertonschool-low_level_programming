/*
 * File: 102-infinite_add.c
 * Auth: Brennan D Baraban
 */

#include "holberton.h"

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number to be added.
 * @n2: The second number to be added.
 * @r: The buffer used to store the result.
 * @size_r: The buffer size.
 *
 * Return: A pointer to the result.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int index, num, carry = 0;
	int n1_len = 0, n2_len = 0, r_len = 0;

	for (index = 0; n1[index]; index++)
		n1_len++;

	for (index = 0; n2[index]; index++)
		n2_len++;

	if (size_r <= n1_len + 1 || size_r <= n2_len + 1)
		return (0);

	if (n1_len >= n2_len)
	{
		r_len = n1_len;

		while (n2_len > 0)
		{
			num = (n1[n1_len - 1] - '0') + (n2[n2_len - 1] - '0') + carry;
			r[n1_len - 1] = (num % 10) + '0';
			carry = num / 10;
			n1_len--;
			n2_len--;
		}

		while (n1_len > 0)
		{
			num = (n1[n1_len - 1] - '0') + carry;
			r[n1_len - 1] = (num % 10) + '0';
			carry = num / 10;
			n1_len--;
		}

		r[r_len] = '\0';

		if (carry && (r_len + 1 < size_r))
		{
			for (index = r_len; index >= 0; index--)
				r[index] = r[index - 1];
			r[0] = (carry % 10) + '0';
			r[r_len + 1] = '\0';
		}

		else if (carry && (r_len + 1 >= size_r))
				return (0);
	}

	else
	{
		r_len = n2_len;

		while (n1_len > 0)
		{
			num = (n1[n1_len - 1] - '0') + (n2[n2_len - 1] - '0') + carry;
			r[n2_len - 1] = (num % 10) + '0';
			n1_len--;
			n2_len--;
		}

		while (n2_len > 0)
		{
			num = (n2[n2_len - 1] - '0') + carry;
			r[n2_len - 1] = (num % 10) + '0';
			carry = 0;
			n2_len--;
		}

		r[r_len] = '\0';

		if (carry && (r_len + 1 < size_r))
		{
			for (index = n2_len; index >= 0; index--)
				r[index] = r[index - 1];
			r[0] = (carry % 10) + '0';
			r[r_len + 1] = '\0';
		}

		else if (carry && (r_len + 1 >= size_r))
				return (0);		

		r[r_len + 1] = '\0';
	}

	return (r);
}
