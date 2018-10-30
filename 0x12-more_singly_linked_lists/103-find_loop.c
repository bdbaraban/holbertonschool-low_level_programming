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
	listint_t *address;

	if (head == NULL)
		return (NULL);

	head = head->next;
	address = (head->next)->next;

	while (address && address->next)
	{
		if (head == address)
			return (head);

		head = head->next;
		address = (address->next)->next;
	}

	return (NULL);
}
