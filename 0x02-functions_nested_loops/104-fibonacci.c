#include <stdio.h>
/**
 * main - print the first 98 fibonacci
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long int t1 = 1;
	unsigned long int t2 = 2;
	unsigned long int nexterm;

	printf("%lu", t1);
	printf(", %lu", t2);

	for (i = 3; i <= 98; i++)
	{
		nexterm = t1 + t2;
		printf(", %lu", nexterm);
		t1 = t2;
		t2 = nexterm;
	}
	printf("\n");
	return (0);
}

