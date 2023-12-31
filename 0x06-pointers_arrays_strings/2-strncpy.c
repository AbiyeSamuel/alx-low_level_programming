#include "main.h"

/**
 * _strncpy - function that copies string
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of strings
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
