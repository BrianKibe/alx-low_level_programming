#include "main.h"
/**
 * leet - encodes string to 1337
 * @s: string to encode
 *
 * Return: pointer to str
 */
char *leet(char *s)
{
	char *p = s;

	while (*p)
	{
		char ch = *p;

		if ((ch == 'a') || (ch == 'A'))
			*p = '4';
		else if ((ch == 'e') || (ch == 'E'))
			*p = '3';
		else if ((ch == 'o') || (ch == 'O'))
			*p = '0';
		else if ((ch == 't') || (ch == 'T'))
			*p = '7';
		else if ((ch == 'l') || (ch == 'L'))
			*p = '1';
		p++;
	}
	return (s);
}
