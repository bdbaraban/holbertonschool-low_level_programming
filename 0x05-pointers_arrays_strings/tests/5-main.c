#include "../holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[] = "Holberton School!\n";
	char *p;

	p = string_toupper(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}
