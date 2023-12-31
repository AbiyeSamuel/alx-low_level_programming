#include "main.h"

/**
 * _strncat - function that concatenate 2 strings
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: destination value
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
