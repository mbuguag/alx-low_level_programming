#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	char jm;

	for (jm = 'a'; jm <= 'z'; jm++)
		putchar(jm);
	for (jm = 'A'; jm <= 'Z'; jm++)
		putchar(jm);
	putchar('\n');
	return (0);
}
