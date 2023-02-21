#include "main.h"
#include <unistd.h>
/**
 * _putchar - usually writes a character c to sdout
 * Gc: character to print
 *
 * Return: 1 on success
 * On error, -1 is returned
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
