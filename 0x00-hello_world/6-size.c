#include <stdio.h>
/**
 * A program that prints the size of various types on the computer it is compiled and run on
 * return: 0 (success)
 */
int main(void)
{
	int a;
	char b;
	long int c;
	long long int d;
	float f;

	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an char: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(c);
	printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
	printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(d));
	return (0);
}

