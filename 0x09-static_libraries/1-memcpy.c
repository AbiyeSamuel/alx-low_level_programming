#include "main.h"

/**
 * _memcpy - functions that copies memory
 * @dest: destination for copy
 * @src: source from where copy is taking place
 * @n: number of bytes
 * Return: copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
