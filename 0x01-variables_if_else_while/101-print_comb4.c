#include <stdio.h>
/**
 * main - prints all permutations of three digits
 * @void - blank
 * Return: always 0
 */
int main(void)
{
	int n;
	int n1;
	int n2;

	for (n = 0; n<= 7; n++)
	{
		for (n1 = n + 1; n1<= 8; n1++)
		{
			for (n2 = n1 + 1; n2 <= 9; n2++)
			{
				putchar('0' + n);
				putchar('0' + n1);
				putchar('0' + n2);
		if (!(n == 7 && n1 == 8 && n2 == 9))
		{
			putchar(44);
			putchar(' ');
		}
			}
		}
	}
	putchar('\n');
	return (0);
}
