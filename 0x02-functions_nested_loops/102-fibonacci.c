#include <stdio.h>

/**
 * main - fibonacci numbers
 * comma separated
 * Return: always 0
 */
int main(void)
{
	int i;
	long int t1 = 1;
	long int t2 = 2;

	printf("%ld", t1); /* Print the first Fibonacci number separately*/
	printf(", %ld", t2); /* Print the second Fibonacci number separately*/

	for (i = 3; i <= 50; i++)
	{
		long int nexterm = t1 + t2; /* Calculates the next term */

		printf(", %ld", nexterm);

		t1 = t2;
		t2 = nexterm;
	}
	printf("\n");
	return (0);
}
