#include "main.h"
/**
 * entry point of a program that draws a diagonal line
 * @n: input number
 * Return: diagonal
 */
void print_diagonal(int n)
{

int co, sp;

if (n <= 0)
{
_putchar('\n');
}

else
{
for (co = 1; co <= n; co++)
{

for (sp = 1; sp < co; sp++)
{
_putchar(' ');
}
_putchar('\\');
}
}
}
