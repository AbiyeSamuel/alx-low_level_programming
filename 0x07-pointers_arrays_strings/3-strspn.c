#include "main.h"

/**
 * _strspn - function that gets the length of a substring prefix
 * @s: string
 * @accept: containing only bytes
 * Return: void
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (0);
}
