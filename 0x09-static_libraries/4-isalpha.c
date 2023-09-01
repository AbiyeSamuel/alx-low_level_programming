#include "main.h"

/**
 * _isalpha - check for alphabet in a string
 * @c: char
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
