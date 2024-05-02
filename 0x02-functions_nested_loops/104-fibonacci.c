#include <stdio.h>
/**
 * main - print the first 98 fibo numbers
 * Return: Always 0
 */

int main(void)
{
	int i;
	unsigned long int t1 = 1;
	unsigned long int t2 = 2;

	printf("%lu", t1);
	printf(", %lu", t2);

	for (i = 3; i <= 98; i++)
	{
		unsigned long int t3 = t1 + t2;

		printf(", %lu", t3);

		t1 = t2;
		t2 = t3;
	}
	printf("\n");
	return (0);
}
