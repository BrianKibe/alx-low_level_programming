#include <stdio.h>
/**
 * main - fibonacci numbers
 * comma separated
 * Return: always 0
 */
int main(void)
{
	int i;

	long int t1 = 0;
	long int t2 = 1;
	long int nexterm = t1 + t2;

	for (i = 1; i <= 50; i++)
	{
		if (i < 50 && i != 1)
		{
			printf(", ");
		}
		printf("%ld", nexterm);
		t1 = t2;
		t2 = nexterm;
		nexterm = t1 + t2;
	}
	printf("\n");
	return (0);
}
