#include "main.h"

/**
 * _strlen_recursion - function that finds the ength of a string
 * @s: string to be modified
 * Return: vallue of the string length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (_strlen_recursion(s) + 1);
}
