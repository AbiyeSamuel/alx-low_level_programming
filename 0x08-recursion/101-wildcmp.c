#include "main.h"
#include <stdio.h>

/**
 * wildcmp - compares 2 strings to see if they can be called identical
 * @s1: string one
 * @s2: string 2, which can hve a special character *
 * Return: 1 or 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	return (0);
}
