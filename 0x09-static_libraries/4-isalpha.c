#include "main.h"
/**
 * _isalpha - checks if character is an alphabet
 * @c: int character
 * Return: 1 if character is uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	else
		return (0);
}
