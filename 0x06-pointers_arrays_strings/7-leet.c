#include "main.h"
/**
 * leet - encodes string to 1337
 * @str: string to encode
 *
 * Return: pointer to str
 */
char *leet(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		char ch = *ptr;

		if ((ch == 'a') || (ch == 'A'))
			*ptr = '4';
		else if ((ch == 'e') || (ch == 'E'))
			*ptr = '3';
		else if ((ch == 'o') || (ch == 'O'))
			*ptr = '0';
		else if ((ch == 't') || (ch == 'T'))
			*ptr = '7';
		else if ((ch == 'l') || (ch == 'L'))
			*ptr = '1';
		ptr++;
	}
	return (str);
}
