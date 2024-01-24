#include "main.h"
/**
 * _puts - output of  string s and a trailing
 * newline
 * @str : pointer to string
 * Return: non-negative number on success or
 * EOF on error
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])

	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
