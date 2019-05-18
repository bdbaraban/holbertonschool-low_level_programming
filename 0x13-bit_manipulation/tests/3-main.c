#include <stdio.h>
#include "../holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int n;

	n = 1024;
	set_bit(&n, 5);
	printf("%lu\n", n);
	n = 0;
	set_bit(&n, 10);
	printf("%lu\n", n);
	n = 98;
	set_bit(&n, 0);
	printf("%lu\n", n);
	return (0);
}
