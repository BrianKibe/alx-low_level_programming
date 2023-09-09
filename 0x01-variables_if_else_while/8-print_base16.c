#include <stdio.h>
/**
 * main - prints numbers in base 16
 * @void - blank
 * Return: always 0
 */

int main(void)
{
	char hexa;
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar('0' + n);
	}
	for (hexa = 'a'; hexa <= 'f'; hexa++)
	{
		putchar(hexa);
	}
	putchar('\n');
	return (0);
}
