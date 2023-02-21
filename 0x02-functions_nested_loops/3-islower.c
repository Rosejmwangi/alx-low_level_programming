#include "main.h"

/**
 * Entry pointof program that checks if char is lowercase
 * Gc; the char to be checked
 * Return 1 if the char is lowercase elsewhere 0
 */
int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
