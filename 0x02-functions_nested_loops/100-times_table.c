#include "main.h"
/**
 * print_times_table - prints the times table
 * @n: number to use
 * Return: nothing, it's void
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{
		return;
	}
	else
	{
		int i, j, prod;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				prod = i * j;

				if (j != 0)
					_putchar(',');
					if (prod < 10)
						_putchar(' ');
					if (prod < 100)
						_putchar(' ');
					_putchar(' ');
				if (prod >= 100)
					_putchar(prod / 100 + '0');
					_putchar((prod % 100) / 10 + '0');
					_putchar((prod % 100) % 10 + '0');

				else if (prod >= 10 && prod <= 99)
				{
					_putchar(prod / 10 + '0');
					_putchar(prod % 10 + '0');
				}
				else
				{
					_putchar(prod + '0');
				}
			} _putchar(10);
		} _putchar(10);
	}
}
