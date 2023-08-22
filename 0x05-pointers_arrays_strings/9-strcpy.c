#include "main.h"

/**
 * _strcpy - functions that copies the sring pointed by src to the dest
 * @dest: destination of function, a pointer
 * @src: a pointer for the source
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
