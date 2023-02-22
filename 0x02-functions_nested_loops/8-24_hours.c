#include "main.h"
/**
 * Entry point of a program that prints every minute of the day of jack
 * starting from 0000hrs to 2359hrs
 */
 void jack_bauer(void)
{
	int i, j;
	i = 0;

	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}
}

