#include <stdio.h>

/**
 * main - main function
 *
 *Return: always 0
 */
int main(void)
{
	int a;
	char b;
	long int c;
	long long int d;
	float f;

	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(c);
	printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
	printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(d));
	return (0);
}

