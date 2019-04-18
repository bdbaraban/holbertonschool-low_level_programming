/*
 * File: 100-jump.c
 * Auth: Brennan D Baraban
 */

#include "search_algos.h"

/**
  * jump_search - Searches for a value in a sorted array
  *               of integers using jump search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  *              Uses the square root of the array size as the jump step.
  */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump;

	if (array == NULL)
		return (-1);

	if ((int)size > 0 && array[0] == value)
	{
		printf("Value checked array[0] = [%d]\n", array[0]);
		return (0);
	}

	jump = sqrt(size);
	for (i = 0; i < size && array[i] < value; i += jump)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	printf("Value found between indexes [%ld] and [%ld]\n", i - jump, i);

	for (i -= jump; i < size && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	if ((int)size > 0 && array[i] == value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		return (i);
	}
	return (-1);
}
