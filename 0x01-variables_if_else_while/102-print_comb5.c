#include <stdio.h>
/**
 * main - permutations of two digits
 * @void - blanks
 * Return: always 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i; j <= 99; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');

			putchar((j / 10) + '0');
			putchar((j % 10) + '0');

			if (i != 99 || j != 99)
			{
				putchar(44);
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
