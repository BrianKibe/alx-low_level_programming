#include "main.h"
/**
 * _strlen - calculated the length of a string
 * pointed to by s, excluding the terminating null byte('\0')
 * @s: string
 * Return: number of bytes in the string pointed to by s, it's
 * type is size_t (unsigned integer type)
 *
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
