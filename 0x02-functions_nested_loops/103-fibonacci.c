#include <stdio.h>
/**
 * main - 4 million
 * Return: Always 0
 */
int main(void)
{
	long int t1 = 1;
	long int t2 = 1;
	long int sum = 0;

	long int t3 = t1 + t2;

	while (t3 <= 4000000)
	{
		if (t3 % 2 == 0)
		{
			sum += t3;
		}
		t1 = t2;
		t2 = t3;
		t3 = t1 + t2;
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}
