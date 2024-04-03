#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints numbers
 * @n: starting point
 */
void print_to_98(int n)
{
	int i = n;

	printf("%d\n", n);

	if (i < 98)
	{
		for (i = n + 1; i <= 98; i++)
		{
			printf(", %d", i);
		}
	}
	else if (n > 98)
	{
		for (i = n - 1; i >= 98; i--)
		{
			printf(", %d", i);
		}
	}
	printf("\n");
}
