#include "main.h"
/**
 * _isupper - checks for an uppercase letter
 *  @c: character to check
 *  Return: if upppercase then 1, otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
