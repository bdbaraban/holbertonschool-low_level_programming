/*
 * File: 1-insertion_sort_list.c
 * Auth: Brennan D Baraban
 */

#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 *                       using the insertion sort algorithm.
 * @list: A pointer to the head of a doubly-linked list of integers.
 *
 * Description: Prints the list after each swap.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *iter, *sorter, *tmp;

	if (list == NULL || *list == NULL)
		return;

	for (iter = (*list)->next; iter != NULL; iter = tmp)
	{
		tmp = iter->next;
		if (iter->n < iter->prev->n)
		{
			sorter = iter->prev;
			while (sorter != NULL && sorter->n > iter->n)
			{
				sorter->next = iter->next;
				if (iter->next != NULL)
					iter->next->prev = sorter;
				iter->prev = sorter->prev;
				iter->next = sorter;
				if (sorter->prev != NULL)
					sorter->prev->next = iter;
				else
					*list = iter;
				sorter->prev = iter;
				sorter = iter->prev;
				print_list((const listint_t *)*list);
			}
		}
	}
}
