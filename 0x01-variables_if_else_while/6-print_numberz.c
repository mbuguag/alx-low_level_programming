#include <stdio.h>
 /**
  * main - entry point
  *
  *Description: This is the function that prints numbers 0-9

  * Return: always 0 (success)
  */
int main(void)
{
	int j;

	for (j = 0; j < 10; j++)
		putchar(j + '0');
	putchar('\n');
	return (0);
}
