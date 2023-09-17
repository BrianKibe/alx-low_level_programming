#include "main.h"
/**
 * print_diagonal- prints a diagonal line
 * @n: number of times the character \ is printed
 * if n is 0 or less function will print a \n
 * Return: null
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < i; j++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
}
