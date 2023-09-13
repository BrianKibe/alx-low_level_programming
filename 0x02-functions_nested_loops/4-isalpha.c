#include "main.h"
/**
 * _isalpha - std library function to check for alphabetic
 * characters
 * @c: integer will be converted to ASCII then checked
 * Return: 1 if c is a letter, uppercase or lowercase
 * 0 if otherwise
 */

int _isalpha(int c)
{
	if (c >= 65  && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
