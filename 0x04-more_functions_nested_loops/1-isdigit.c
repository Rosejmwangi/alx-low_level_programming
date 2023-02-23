#include "main.h"
/**
 * entry point for a program that checks for a digit (0 through 9)
 * @c: input of the program
 * Return 1 if c is a digit otherwise return 0
 */
int _isdigit(int c)
{

if ((c >= 48) && (c <= 57))
return (1);
else
return (0);
}
