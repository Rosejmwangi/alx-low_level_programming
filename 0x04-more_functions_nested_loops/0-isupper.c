#include "main.h"
/**
 * entry point of a program that checks for uppercase character
 * @c: input to the program
 * Return:1 if c is uppercase elsewhere 0
 */
int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
return (1);
else
return (0);
}
