#include <stdlib.h>
#include <stdio.h>
/**
 * entry point of a program that prints a number from 1-100
 * 3 multiplies print fizz
 * 5 print buzz
 * 3 & 5 print fizzbuzz
 * Return: 0
 */
int main(void)
{
int i;
char f[] = "fizz";
char b[] = "buzz";
char fb[] = "fizzbuzz";
for (i = 1; i <= 100; i++)
{
if (i == 100)
printf("%s", b);
else if ((i % 3 == 0) && (i % 5 == 0))
printf("%s", fb);
else if (i % 3 == 0)
printf("%s", f);
else if (i % 5 == 0)
printf("%s", b);
else
printf("%d", i);
}
printf("\n");
return (0);
}
