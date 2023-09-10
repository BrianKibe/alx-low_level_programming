#include <stdio.h>
/**
 * main - permutations of two digits
 * @void - blanks
 * Return: always 0
 */

int main(void)
{
	int n1;
	int n2;

	for (n1 = 0; n1 <= 8; n1++)
	{
		for (n2 = n1 + 1; n2 <= 9; n2++)
		{
			putchar('0' + n1);
			putchar('0' + n2);

			if (!(n1 == 8 && n2 == 9))
			{
				putchar(44);
				putchar(' ');
			}
	}
	}
	putchar('\n');
	return (0);
}

