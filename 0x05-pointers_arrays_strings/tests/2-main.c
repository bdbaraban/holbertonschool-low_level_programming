#include "../holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[98];
	char *p;
	int i;

	for (i = 0; i < 98 - 1; i++)
	{
		s1[i] = '*';

	}
	s1[i] = '\0';
	printf("%s\n", s1);
	p = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
	printf("%s\n", s1);
	printf("%s\n", p);
	p = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
	printf("%s", s1);
	printf("%s", p);
	for (i = 0; i < 98; i++)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", s1[i]);
	}
	printf("\n");
	return (0);
}
