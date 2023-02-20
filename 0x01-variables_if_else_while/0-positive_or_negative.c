#include <stdio.h>
/**
 * main - Entry point  main block
 * Description: This program will assign a random number to the variable n each time it is executed.Get a random number and print the number
 * and if the number is positive, negative, or zero
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);
	return (0);
}
