/*
 * File: 104-heap_sort.c
 * Auth: Brennan D Baraban
 */

#include "sort.h"

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
 * heapify - Turn a binary subtree into a complete binary heap.
 * @array: An array of integers representing a binary tree.
 * @size: The size of the array.
 * @top: The index of the top row of the subtree.
 * @parent: The parent node of the binary subtree.
 */
void heapify(int *array, size_t size, size_t top, size_t parent)
{
	size_t left, right, large;

	left = 2 * parent + 1;
	right = 2 * parent + 2;
	large = parent;

	if (left < top && array[left] > array[large])
		large = left;
	if (right < top && array[right] > array[large])
		large = right;

	if (large != parent)
	{
		swap(array + parent, array + large);
		print_array(array, size);
		heapify(array, size, top, large);
	}
}

/**
 * heap_sort - Sort an array of integers in ascending
 *             order using the heap sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void heap_sort(int *array, size_t size)
{
	int i;

	if (array == NULL || size < 2)
		return;

	for (i = (size / 2) - 1; i >= 0; i--)
		heapify(array, size, size, i);

	for (i = size - 1; i > 0; i--)
	{
		swap(array, array + i);
		print_array(array, size);
		heapify(array, size, i, 0);
	}
}
