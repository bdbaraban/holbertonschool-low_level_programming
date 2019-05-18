#include <stdio.h>
#include "../dog.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	struct dog my_dog;

	my_dog.name = "Django";
	my_dog.age = 3.5;
	my_dog.owner = "Jay";
	print_dog(&my_dog);
	return (0);
}
