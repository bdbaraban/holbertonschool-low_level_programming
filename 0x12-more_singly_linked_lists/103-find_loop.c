/*
 * File: 103-find_loop.c
 * Auth: Brennan D Baraban
 */

#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 *                     a listint_t linked list.
 * @head: A pointer to the head
 *        of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *copy = head, *address = head;

	if (copy == NULL || copy->next == NULL)
		return (NULL);

	copy = head->next;

	while (copy)
	{
		if (copy >= address)
			return (copy);

		address = copy;
		copy = copy->next;
	}

	return (NULL);
}
