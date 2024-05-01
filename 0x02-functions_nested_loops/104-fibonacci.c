#include <stdio.h>
/**
 * main - print the first 98 fibonacci
 * Return: Always 0
 */
int main(void)
{
	int i;
	long int t1 = 1;
	long int t2 = 2;

	printf("%ld", t1);
	printf(", %ld", t2);

	for (i = 3; i <= 98; i++)
	{
		long int t3 = t1 + t2;

		printf(", %ld", t3);
		t1 = t2;
		t2 = t3;
	}
	printf("\n");
	return (0);
}

