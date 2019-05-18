#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	list_t *head;

	head = NULL;
	add_node(&head, "Alexandro");
	add_node(&head, "Asaia");
	add_node(&head, "Augustin");
	add_node(&head, "Bennett");
	add_node(&head, "Bilal");
	add_node(&head, "Chandler");
	add_node(&head, "Damian");
	add_node(&head, "Daniel");
	add_node(&head, "Dora");
	add_node(&head, "Electra");
	add_node(&head, "Gloria");
	add_node(&head, "Joe");
	add_node(&head, "John");
	add_node(&head, "John");
	add_node(&head, "Josquin");
	add_node(&head, "Kris");
	add_node(&head, "Marine");
	add_node(&head, "Mason");
	add_node(&head, "Praylin");
	add_node(&head, "Rick");
	add_node(&head, "Rick");
	add_node(&head, "Rona");
	add_node(&head, "Siphan");
	add_node(&head, "Sravanthi");
	add_node(&head, "Steven");
	add_node(&head, "Tasneem");
	add_node(&head, "William");
	add_node(&head, "Zee");
	print_list(head);
	return (0);
}
