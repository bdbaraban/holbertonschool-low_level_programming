#include "../1-pi.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	float a;
	float r;

	r = 98;
	a = PI * r * r;
	printf("%.3f\n", a);
	return (0);
}
