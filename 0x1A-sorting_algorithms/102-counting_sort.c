/*
 * File: 102-counting_sort.c
 * Auth: Brennan D Baraban
 */

#include "sort.h"

/**
 * counting_sort - Sort an array of integers in ascending order
 *                 using the counting sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the counting array after setting it up.
 */
void counting_sort(int *array, size_t size)
{
	int *count, *sorted, max, sum;
	size_t i;

	if (array == NULL || size < 2)
		return;

	sorted = malloc(sizeof(int) * size);
	if (sorted == NULL)
		return;

	max = array[0];
	for (i = 1; i < size; i++)
		max = (array[i] > max) ? array[i] : max;
	count = malloc(sizeof(int) * (max + 1));
	if (count == NULL)
		return;

	for (i = 0; i < (size_t)(max + 1); i++)
		count[i] = 0;
	for (i = 0; i < size; i++)
		count[array[i]] += 1;
	for (i = 0, sum = 0; i < (size_t)(max + 1); i++)
	{
		count[i] += sum;
		sum = count[i];
	}

	print_array(count, max + 1);

	for (i = 0; i < size; i++)
	{
		sorted[count[array[i]] - 1] = array[i];
		count[array[i]] -= 1;
	}

	for (i = 0; i < size; i++)
		array[i] = sorted[i];

	free(count);
	free(sorted);
}
