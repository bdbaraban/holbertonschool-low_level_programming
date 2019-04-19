/*
 * File: 105-jump_list.c
 * Auth: Brennan D Baraban
 */

#include "search_algos.h"

/**
 * jump_list - Searches for an algorithm in a sorted singly
 *             linked list of integers using jump search.
 * @list: A pointer to the  head of the linked list to search.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the head of the list is NULL, NULL.
 *         Otherwise, a pointer to the first node where the value is located.
 *
 * Description: Prints a value every time it is compared in the list.
 *              Uses the square root of the list size as the jump step.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, step_size, s;
	listint_t *node, *jump;

	if (list == NULL)
		return (NULL);

	for (step = step_size = sqrt(size), jump = list; jump->index < step;)
	{
		if (jump->index + 1 >= size)
			break;
		jump = jump->next;
	}

	for (node = list; node->index < size && node->n < value;)
	{
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
		if (jump->index + 1 >= size || jump->n > value)
			break;
		node = jump;
		for (s = step, step += step_size; s < step; s++)
		{
			if (jump->index + 1 >= size)
				break;
			jump = jump->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jump->index);

	for (; node->index < size && node->n < value; node = node->next)
	{
		if (node->index + 1 >= size)
			break;
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	}
	if (size > 0)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->index < size && node->n == value ? node : NULL);
}
