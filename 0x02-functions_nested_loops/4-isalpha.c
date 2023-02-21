#include "main.h"

/**
 * entry point of a program that checks for alphabetic characters
 * Gc; the character that will be selected
 * Return if c is a letter 1, 0 elsewhere
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
