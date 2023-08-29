#include "main.h"

/**
 * _memcpy - functions that copies memory area
 * @dest: destination area to recieve
 * @src: source area from which memory is copied
 * @n: number of bytes too be copied
 * Return: A pointer to the destination.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int r = n;

	for (; r < i; i++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
