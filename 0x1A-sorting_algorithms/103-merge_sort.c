/*
 * File: 103-merge_sort.c
 * Auth: Brennan D Baraban
 */

#include "sort.h"

void merge(int *subarray, size_t front, size_t mid, size_t back);
void merge_sort_recursive(int *subarr, size_t front, size_t back);
void merge_sort(int *array, size_t size);

/**
 * merge - Sort and merge a subarray of integers.
 * @subarr: A subarry of an array of integers to sort.
 * @front: The front index of the array.
 * @mid: The middle index of the array.
 * @back: The back index of the array.
 */
void merge(int *subarr, size_t front, size_t mid, size_t back)
{
	int *sort;
	size_t i, j, k = 0;

	sort = malloc(sizeof(int) * back);
	if (sort == NULL)
		return;

	printf("Merging...\n[left]: ");
	for (i = front; i < mid; i++)
	{
		printf("%d", subarr[i]);
		(i != mid - 1) ? printf(", ") : printf("\n");
	}
	printf("[right]: ");
	for (j = mid; j < back; j++)
	{
		printf("%d", subarr[j]);
		(j != back - 1) ? printf(", ") : printf("\n");
	}

	for (i = front, j = mid; i < mid && j < back; k++)
		sort[k] = (subarr[i] < subarr[j]) ? subarr[i++] : subarr[j++];
	for (; i < mid; i++)
		sort[k++] = subarr[i];
	for (; j < back; j++)
		sort[k++] = subarr[j];
	for (i = front, k = 0; i < back; i++)
		subarr[i] = sort[k++];

	printf("[Done]: ");
	for (i = front; i < back; i++)
	{
		printf("%d", subarr[i]);
		(i != back - 1) ? printf(", ") : printf("\n");
	}

	free(sort);
}

/**
 * merge_sort_recursive - Implement the merge sort algorithm through recursion.
 * @subarr: A subarray of an array of integers to sort.
 * @front: The front index of the subarray.
 * @back: The back index of the subarray.
 */
void merge_sort_recursive(int *subarr, size_t front, size_t back)
{
	size_t mid;

	if (back - front > 1)
	{
		mid = front + (back - front) / 2;
		merge_sort_recursive(subarr, front, mid);
		merge_sort_recursive(subarr, mid, back);
		merge(subarr, front, mid, back);
	}
}

/**
 * merge_sort - Sort an array of integers in ascending
 *              order using the merge sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Implements the top-down merge sort algorithm.
 */
void merge_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	merge_sort_recursive(array, 0, size);
}
