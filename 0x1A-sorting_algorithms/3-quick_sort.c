/*
 * File: 3-quick_sort.c
 * Auth: Brennan D Baraban
 */

#include "sort.h"

void swap(int *a, int *b);
int partition(int *array, size_t size, int low, int high);
void sort(int *array, size_t size, int low, int high);
void quick_sort(int *array, size_t size);

/**
 * swap - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * partition - Order a subset of an array of integers according to a pivot.
 * @array: The array of integers.
 * @size: The size of the array.
 * @low: The starting point of the subset to order.
 * @high: The ending point of the subset to order.
 *
 * Return: The index of the last swap.
 *
 * Description: Uses the last element of the partition as the pivot.
 */
int partition(int *array, size_t size, int low, int high)
{
	int *pivot, i, j;

	pivot = (array + high);
	for (i = low, j = low; j <= high - 1; j++)
	{
		if (array[j] < *pivot)
		{
			if (i != j)
			{
				swap(array + i, array + j);
				print_array(array, size);
			}
			i++;
		}
	}

	if (array + i != pivot)
	{
		swap(array + i, pivot);
		print_array(array, size);
	}

	return (i);
}

/**
 * sort - Implement the quicksort algorithm through recursion.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 * @low: The starting point of the array partition to order.
 * @high: The ending point of the array partition to order.
 */
void sort(int *array, size_t size, int low, int high)
{
	int part;

	if (low < high)
	{
		part = partition(array, size, low, high);
		sort(array, size, low, part - 1);
		sort(array, size, part + 1, high);
	}
}

/**
 * quick_sort - Sort an array of integers in ascending
 *              order using the quicksort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Uses the Lomuto partition scheme. Prints
 *              the array after each swap of two elements.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;

	sort(array, size, 0, size - 1);
}
