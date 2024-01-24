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
	int n3;

	for (n = 0; n <= 6; n++)
	{
		for (n1 = n + 1; n1 <= 7; n1++)
		{
			for (n2 = n1 + 1; n2 <= 8; n2++)
			{
				for (n3 = n2 + 1; n3 <= 9; n3++)
				{
					putchar('0' + n);
					putchar('0' + n1);
				if (!(n == 6 && n1 == 7))
				{
					putchar(' ');

					if(!(n2 == 8 && n3 == 9))
					{
						putchar('0' + n2);
						putchar('0' + n3);

			if (!(n3 == 9 && n4 == 9))
			{
				putchar(44);
				putchar(' ');

	putchar('\n');
	return (0);
			
					}
				}
			}

		}
	}
}
}
}
