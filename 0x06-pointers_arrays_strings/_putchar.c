#include <unistd.h>

/**
* _putchar - A function  that writes a character to the standard output
*
*@c: The character to be written
* Return: On success, the character is returned, -1 otherwise
*/
int _putchar(char c)
{
        return write(1, &c, 1);
}
