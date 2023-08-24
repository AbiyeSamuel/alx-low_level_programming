#include "main.h"
#include <string.h>

/**
 * _strncat - a function that concatenates n bytes of strings
 * @dest: destination pointer parameter
 * @src: source pointer parameter
 * @n: number of bytes
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[len + i] = *src;
		src++;
	}
	dest[len + i] = '\0';
	return (dest);
}
