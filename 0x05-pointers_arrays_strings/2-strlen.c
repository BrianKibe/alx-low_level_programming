#include "main.h"
/**
 * _strlen - prints string to stdout
 * @s: pointer to string to print
 * Return: null
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
