#include "main.h"

/**
 * _strlen - returns the length of a given string
 * @s: string
 * Return: Length of the string
 */

int _strlen(char *s)
{
	int str = 0;

	while (*s != '\0')
	{
		str++;
		s++;
	}
	return (str);
}
