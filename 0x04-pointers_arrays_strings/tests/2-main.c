#include "../holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str;
	int len;

	str = "Holberton!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
