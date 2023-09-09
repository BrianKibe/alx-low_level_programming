#include <stdio.h>
/**
 * main - prints all possible combinations of single digit numbers
 * @void - blanks
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar('0' + n);
		if (n < 9)
		{
			putchar(44);
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
