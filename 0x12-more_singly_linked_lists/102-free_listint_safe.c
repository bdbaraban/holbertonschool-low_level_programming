/*
 * File: 102-free_listint_safe.c
 * Auth: Brennan D Baraban
 */

#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely (ie.
 *                     can free lists containing loops)
 * @h: A pointer to the address of
 *     the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 *
 * Description: The function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp, *address = *h;
	size_t nodes = 0;

	if (h == NULL || *h == NULL)
	{
		h = NULL;
		return (nodes);
	}

	nodes++;
	tmp = (*h)->next;
	free(*h);
	*h = tmp;

	while (*h)
	{
		if (*h >= address)
		{
			*h = NULL;
			continue;
		}

		nodes++;
		address = *h;
		tmp = (*h)->next;
		free(*h);
		*h = tmp;
	}

	h = NULL;

	return (nodes);
}
