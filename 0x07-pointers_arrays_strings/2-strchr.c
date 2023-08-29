#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string to be located
 * @c: character inside the string
 * Return: pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
