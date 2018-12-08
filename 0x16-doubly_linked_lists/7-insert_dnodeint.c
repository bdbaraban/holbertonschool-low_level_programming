/*
 * File: 7-insert_dnodeint.c
 * Auth: Brennan D Baraban
 */

#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node in a dlistint_t
 *                            list at a given position.
 * @h: A pointer to the head of the dlistint_t list.
 * @idx: The position to insert the new node.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new;
	unsigned int i;

	for (i = 0; i < (idx - 1); i++)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->prev = NULL;
		new->next = NULL;
		*h = new;
		return (new);
	}

	new->prev = tmp;
	new->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = new;
	tmp->next = new;

	return (new);
}
