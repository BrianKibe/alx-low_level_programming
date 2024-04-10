#include "main.h"
/**
 * print_times_table - does exactly that
 * @n: character used
 * Return: nada
 */
void print_times_table(int n)
{
	int i, result;
	if (n > 15 || n < 0)
	{
		for (i = 0; i <= 3; i++)
		{
			result = i * n;
			putchar(result / 10 + '0');
			putchar(result % 10 + '0');
		}
	}
	else
	{
		break;
	}
}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_times_table(3);
    _putchar('\n');
    print_times_table(5);
    _putchar('\n');
    print_times_table(98);
    _putchar('\n');
    print_times_table(12);
    return (0);
}
