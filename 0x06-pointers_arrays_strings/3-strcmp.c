#include "main.h"
/**
 * _strcmp - compares two strings
 * lexigr
 * @s1: first string
 * @s2: second string
 * Return: int <,= or > or 0 if s1 is found
 * or <, = or > than s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 == '\0' && *s2 == '\0')
	{
		return (0);
	}

	return (*s1 - *s2);
}

