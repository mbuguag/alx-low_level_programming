#include "main.h"

/**
 * _isupper - check i uppercase
 * @c: char to check
 *
 * Return: if uppercase return 1, else lse return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
