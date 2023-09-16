#include "main.h"
/**
 * print_line - function prints a straight line
 * @n: - character to be printed as underscore
 * Return: nil
 */
void print_line(int n)
{

	for (n = 0; n <= 10; n++)
	{
		_putchar('_');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
	_putchar('\n');
}
