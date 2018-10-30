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
	listint_t *address = head;

	while (head)
	{
		if (head > address)
			return (head);

		address = head;
		head = head->next;
	}

	return (NULL);
}
