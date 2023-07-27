#include <unistd.h>

/**
 * _putchar - checks the code
 *
 * Return: 0
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

