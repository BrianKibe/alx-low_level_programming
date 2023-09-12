#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase,
 * followed by a new line
 * @void - specifies the return type
 * Return: always 0
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
_putchar('\n');
}
