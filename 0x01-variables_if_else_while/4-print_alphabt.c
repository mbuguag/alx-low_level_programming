#include <stdio.h>

/**
 * main - main function
 *
 * Return: success 0
 */
int main(void)
{
	char jm;

	for (jm = 'a'; jm <= 'z'; jm++)
		if (jm != 'e' && jm != 'q')
			putchar(jm);
	putchar('\n');
	return (0);
}
