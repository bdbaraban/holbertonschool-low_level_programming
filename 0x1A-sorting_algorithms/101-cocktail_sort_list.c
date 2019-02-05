/*
 * File: 101-cocktail_sort_list.c
 * Auth: Brennan D Baraban
 */

#include "sort.h"

void swap_forward(listint_t **list, listint_t **shaker, listint_t **tail);
void swap_backward(listint_t **list, listint_t **shaker, listint_t **tail);
void cocktail_sort_list(listint_t **list);

/**
 * swap_forward - Swap a node in a doubly-linked list of
 *                integers with the node ahead of it.
 * @list: A pointer to the head of a doubly-linked list of integers.
 * @shaker: A pointer to the current swapping node of the cocktail shaker algo.
 * @tail: A pointer to the tail of the doubly-linked list.
 */
void swap_forward(listint_t **list, listint_t **shaker, listint_t **tail)
{
	listint_t *tmp = (*shaker)->next;

	if ((*shaker)->prev != NULL)
		(*shaker)->prev->next = tmp;
	else
		*list = tmp;
	tmp->prev = (*shaker)->prev;
	(*shaker)->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = *shaker;
	else
		*tail = *shaker;
	(*shaker)->prev = tmp;
	tmp->next = *shaker;
	*shaker = tmp;
}

/**
 * swap_backward - Swap a node in a doubly-linked list of
 *                 integers with the node ahead of it.
 * @list: A pointer to the head of a doubly-linked list of integers.
 * @shaker: A pointer to the current swapping node of the cocktail shaker algo.
 * @tail: A pointer to the tail of the doubly-linked list.
 */
void swap_backward(listint_t **list, listint_t **shaker, listint_t **tail)
{
	listint_t *tmp = (*shaker)->prev;

	if ((*shaker)->next != NULL)
		(*shaker)->next->prev = tmp;
	else
		*tail = tmp;
	tmp->next = (*shaker)->next;
	(*shaker)->prev = tmp->prev;
	if (tmp->prev != NULL)
		tmp->prev->next = *shaker;
	else
		*list = *shaker;
	(*shaker)->next = tmp;
	tmp->prev = *shaker;
	*shaker = tmp;
}

/**
 * cocktail_sort_list - Sort a doubly-linked list of integers in ascending
 *                      order using the cocktail shaker algorithm.
 * @list: A pointer to the thead of a doubly-linked listint_t list.
 *
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *tail, *shaker;
	char sorted = 1;

	if (list == NULL || *list == NULL)
		return;

	for (tail = *list; tail->next != NULL;)
		tail = tail->next;

	while (sorted == 1)
	{
		sorted = 0;
		for (shaker = *list; shaker != tail; shaker = shaker->next)
		{
			if (shaker->n > shaker->next->n)
			{
				swap_forward(list, &shaker, &tail);
				print_list((const listint_t *)*list);
				sorted = 1;
			}
		}
		for (shaker = shaker->prev; shaker != *list; shaker = shaker->prev)
		{
			if (shaker->n < shaker->prev->n)
			{
				swap_backward(list, &shaker, &tail);
				print_list((const listint_t *)*list);
				sorted = 1;
			}
		}
	}
}
