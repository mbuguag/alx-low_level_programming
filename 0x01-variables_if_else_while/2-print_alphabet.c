#include <stdio.h>

/*A program that prints alpjabets in lowercase*/
/**
 * main - main function
 *
 * return: success 0
 */
int main(void)
{
	char i;
	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar("\n");
	return (0);
}
