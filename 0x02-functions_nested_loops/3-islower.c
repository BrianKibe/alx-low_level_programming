#include "main.h"
/**
 * _islower - library function to check for lowercase
 * @c:integer to be converted to ASCII
 * Return: 1 if c is lowercase
 * or 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
