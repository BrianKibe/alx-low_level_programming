#include "main.h"
/**
 * string_toupper - changes lower to uppercase
 *  @s: string to change
 *
 *
 * Return: nothing
 */
char *string_toupper(char *s)
{
	char *original = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s = *s - 32;
		}
		s++;
	}
	return (original);
}
