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
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
