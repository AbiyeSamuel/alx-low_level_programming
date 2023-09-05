#include "main.h"

/**
 * str_concat - function that concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * Return: Null if failed or new string.
 */

char *str_concat(char *s1, char *s2)
{
	size_t len1, len2, k, l;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;
	ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (k = 0; k < len1; k++)
	{
		ptr[k] = s1[k];
	}
	for (l = 0; l <= len2; l++)
	{
		ptr[k] = s2[l];
		k++;
	}
	return (ptr);
}
