#include <stdio.h>
/**
 * main - compute multiples of 5 and 3
 * and get their sum
 * Return: nothing
 */
int main(void)
{
	int i = 0, num = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			num += i;
		}

	}
	printf("%d\n", num);
	return (0);
}

