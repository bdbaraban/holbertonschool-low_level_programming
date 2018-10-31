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
	listint_t *loop, *address;

	if (head == NULL || head->next == NULL)
		return (NULL);

	address = (head->next)->next;
	loop = head->next;

	while (address)
	{
		if (loop == address)
		{
			loop = head;

			while (loop != address)
			{
				loop = loop->next;
				address = address->next;
			}

			return (loop);
		}

		address = (address->next)->next;
		loop = loop->next;
	}

	return (NULL);
}
