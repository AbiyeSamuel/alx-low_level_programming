#include "main.h"

/**
 * _memset - function that fill memory with a constant type
 * @s: intial address
 * @b: the desired value
 * @n: number of bytes to e changed
 * Return: A pointer to the memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
