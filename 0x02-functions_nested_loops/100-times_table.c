#include "main.h"
/**
 * print_times_table - prints the table for
 * numbers
 * @n: number to use
 * Return: nothing, function is void
 */
void print_times_table(int n)
{
	if (n > 15 || n < 0)
	{
		return;
	}
	else
	{
		int i = 0;

		while (i <= n)
		{
			int j = 0, prod;

			while (j <= n)
			{
				prod = i * j;
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (prod >= 100)
					_putchar(prod / 100 + '0');
					_putchar((prod % 100) / 10 + '0');
					_putchar((prod % 100) % 10 + '0');
				else if (prod >= 10)
				{
					_putchar(prod / 10 + '0');
					_putchar(prod % 10 + '0');
				}
				else
				{
					_putchar(prod + '0');
				}

				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
