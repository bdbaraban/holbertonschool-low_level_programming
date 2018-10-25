#ifndef LISTS_H
#define LISTS_H

/*
 * File: lists.h
 * Auth: Brennan D Baraban
 * Desc: Header file containing prototypes and definitions for all functions
 *       and types written in the 0x11-singly_linked_lists directory.
 */

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *              for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

#endif /* LISTS_H */
