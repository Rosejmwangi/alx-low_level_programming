#include <stdio.h>

/**
 * main - it usually cause an infinite loop
 * Return - 0
 */

int main(void)
{
int i;

printf("infinite loop incoming :(\n");

i = 0;
/*
 * while (i < 10)
 * {
 *                putchar(i);
 * }
 */
printf("infinite loop avoided! \\o/\n");

return (0);
}