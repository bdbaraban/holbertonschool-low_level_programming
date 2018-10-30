/*
 * File: 101-print_listint_safe.c
 * Auth: Brennan D Baraban
 */

#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 *
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *address = head;
	size_t nodes = 0;

	if (head == NULL)
		return (nodes);

	nodes++;
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;

	while (head)
	{
		if (head < address)
		{
			nodes++;
			printf("[%p] %d\n", (void *)head, head->n);
			address = head;
			head = head->next;
		}

		else
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
	}

	return (nodes);
}
