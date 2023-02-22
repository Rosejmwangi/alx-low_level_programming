#include "main.h"
/**
 * Entry point of a program which prints the last digit of a number
 * @n: integer to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int z;

	if (n < 0)
		n = -n;
	z = n % 10;

	if (z < 0)
		z = -z;
	_putchar(z + '0');

	return (z);
}
