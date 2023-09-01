#include "main.h"

/**
 * _memset - function that fils a block of memory with a value
 * @s: location of memory
 * @b: desired value to be used
 * @n: number of bytes
 * Return: changed array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
