#include "main.h"
/**
 * print_last_digit(int)- prints last digit of a number
 * @n: number to be printed
 * Return: last digit of a number
 */

int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
	{
		ld = -ld;
	}
	_putchar(ld + '0');
	return (ld);
}
