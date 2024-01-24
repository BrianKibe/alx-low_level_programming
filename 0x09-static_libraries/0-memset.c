#include "main.h"
/**
 * _memset - fills a memory area with a constant byte
 * @b: constant byte
 * @n: bytes filled
 * @s: memory area
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}
